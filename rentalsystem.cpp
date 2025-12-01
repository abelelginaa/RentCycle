#include "rentalsystem.h"
#include <iostream>
#include <fstream>
using namespace std;

void RentalSystem::addBicycle() {
    int id, price;
    cout << "Enter Bicycle ID : ";
    cin >> id;
    cout << "Enter Price per Hour : ";
    cin >> price;

    list.push_back(Bicycle(id, price));
    cout << "✓ Input Success!\n";
}

void RentalSystem::editBicycle() {
    int id;
    cout << "Enter Bicycle ID: ";
    cin >> id;

    for (auto &b : list) {
        if (b.getId() == id) {
            int newPrice;
            cout << "New Price per Hour: ";
            cin >> newPrice;
            b.setPrice(newPrice);
            cout << "✓ Succesfully Changed!\n";
            return;
        }
    }
    cout << "✗ No Bicycle Found.\n";
}

void RentalSystem::removeBicycle() {
    int id;
    cout << "Enter Bicycle ID: ";
    cin >> id;

    for (int i = 0; i < list.size(); i++) {
        if (list[i].getId() == id) {
            list.erase(list.begin() + i);
            cout << "✓ Succesfully Deleted.\n";
            return;
        }
    }
    cout << "✗ No Bicycle Found.\n";
}

void RentalSystem::displayAll() {
    cout << "\n=== BICYCLE LIST ===\n";
    for (auto &b : list)
        b.display();
}

void RentalSystem::rentBicycle() {
    int id, hour;
    string name;

    cout << "Enter Bicycle ID: ";
    cin >> id;
    cout << "Name: ";
    cin >> name;
    cout << "Enter Rent Time (0–23): ";
    cin >> hour;

    for (auto &b : list) {
        if (b.getId() == id && b.getStatus()) {
            b.setStatus(false);
            b.setBorrower(name);
            b.setStartHour(hour);
            cout << "✓ Successfully Rented.\n";
            return;
        }
    }
    cout << "✗ No Bicycle Found.\n";
}

void RentalSystem::returnBicycle() {
    int id, returnHour;
    cout << "Enter Bicycle ID: ";
    cin >> id;
    cout << "Return Time (0–23): ";
    cin >> returnHour;

    for (auto &b : list) {
        if (b.getId() == id && !b.getStatus()) {
            int duration = returnHour - b.getStartHour();
            if (duration < 1) duration = 1;

            int cost = duration * b.getPrice();
            cout << "Rent Duration: " << duration << " jam\n";
            cout << "Total Payment: Rp " << cost << endl;

            b.setStatus(true);
            b.setBorrower("-");
            b.setStartHour(0);
            return;
        }
    }
    cout << "✗ No Bicycle Found / Bicycle Available.\n";
}

void RentalSystem::loadData() {
    ifstream file("input.txt");
    if (!file.is_open()) {
        cout << "Input file (input.txt) not found.\n";
        return;
    }

    list.clear();
    int id, price, status, startHour;
    string borrower;

    while (file >> id >> price >> status >> borrower >> startHour) {
        Bicycle b(id, price);
        b.setStatus(status);
        b.setBorrower(borrower);
        b.setStartHour(startHour);
        list.push_back(b);
    }

    cout << "✓ Succesfully uploaded input.txt\n";
    file.close();
}

void RentalSystem::saveData() {
    ofstream file("output.txt");

    for (auto &b : list) {
        file << b.getId() << " "
             << b.getPrice() << " "
             << b.getStatus() << " "
             << b.getBorrower() << " "
             << b.getStartHour() << endl;
    }

    cout << "✓ Successfully saved output.txt\n";
    file.close();
}

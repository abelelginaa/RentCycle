#include <iostream>
#include "rentalsystem.h"
using namespace std;

int main() {
    RentalSystem app;
    int choice;

    while (true) {
        cout << "\n=== RENT-CYCLE MENU ===\n";
        cout << "1. Add Bicycle Data\n";
        cout << "2. Edit Bicycle Data\n";
        cout << "3. Remove Bicycle Data\n";
        cout << "4. Display Bicycle Data\n";
        cout << "5. Rent Bicycle \n";
        cout << "6. Return Bicycle \n";
        cout << "7. Load Data\n";
        cout << "8. Save Data\n";
        cout << "9. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1: app.addBicycle(); break;
            case 2: app.editBicycle(); break;
            case 3: app.removeBicycle(); break;
            case 4: app.displayAll(); break;
            case 5: app.rentBicycle(); break;
            case 6: app.returnBicycle(); break;
            case 7: app.loadData(); break;
            case 8: app.saveData(); break;
            case 9: return 0;
            default: cout << "Invalid Number.\n";
        }
    }
}

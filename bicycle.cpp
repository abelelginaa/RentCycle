#include "bicycle.h"
#include <iostream>

Bicycle::Bicycle(int id, int price) {
    this->id = id;
    this->pricePerHour = price;
    this->isAvailable = true;
    this->borrower = "-";
    this->startHour = 0;
}

int Bicycle::getId() const { return id; }
bool Bicycle::getStatus() const { return isAvailable; }
int Bicycle::getPrice() const { return pricePerHour; }
std::string Bicycle::getBorrower() const { return borrower; }
int Bicycle::getStartHour() const { return startHour; }

void Bicycle::setPrice(int price) { pricePerHour = price; }
void Bicycle::setStatus(bool status) { isAvailable = status; }
void Bicycle::setBorrower(std::string name) { borrower = name; }
void Bicycle::setStartHour(int hour) { startHour = hour; }

void Bicycle::display() const {
    std::cout << "ID: " << id
              << " | Status: " << (isAvailable ? "Available" : "Rented")
              << " | Price/hr: " << pricePerHour
              << " | Borrower: " << borrower << std::endl;
}

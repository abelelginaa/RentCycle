#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include "bicycle.h"
#include <vector>

class RentalSystem {
private:
    std::vector<Bicycle> list;

public:
    void addBicycle();
    void editBicycle();
    void removeBicycle();
    void displayAll();
    void rentBicycle();
    void returnBicycle();
    void loadData();
    void saveData();
};

#endif

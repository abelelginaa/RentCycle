#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

class Bicycle {
private:
    int id;
    bool isAvailable;
    int pricePerHour;
    std::string borrower;
    int startHour;

public:
    Bicycle(int id = 0, int price = 0);

    // Getter & Setter
    int getId() const;
    bool getStatus() const;
    int getPrice() const;
    std::string getBorrower() const;
    int getStartHour() const;

    void setPrice(int price);
    void setStatus(bool status);
    void setBorrower(std::string name);
    void setStartHour(int hour);

    // Display
    void display() const;
};

#endif

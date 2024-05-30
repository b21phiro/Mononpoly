#include "Property.hpp"
#include <iostream>

Property::Property(const std::string &name, int price, int rent)
    : name(name), price(price), rent(rent) {}

std::string Property::getName() const {
    return name;
}

void Property::action() {
    std::cout << "You have landed on " << name << ". The rent is " << rent << "." << std::endl;
}

int Property::getPrice() const {
    return price;
}

int Property::getRent() const {
    return rent;
}

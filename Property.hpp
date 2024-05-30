#ifndef PROPERTY_HPP
#define PROPERTY_HPP

#include "Land.hpp"

class Property : public Land {
private:
    std::string name;
    int price;
    int rent;

public:
    Property(const std::string &name, int price, int rent);
    std::string getName() const override;
    void action() override;
    int getPrice() const;
    int getRent() const;
};

#endif // PROPERTY_HPP

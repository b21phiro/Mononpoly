#include "ActionLand.hpp"
#include <iostream>

ActionLand::ActionLand(const std::string &name) : name(name) {}

std::string ActionLand::getName() const {
    return name;
}

void ActionLand::action() {
    std::cout << "You have landed on " << name << ". Take the action associated with this land." << std::endl;
}

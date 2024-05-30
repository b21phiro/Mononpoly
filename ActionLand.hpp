#ifndef ACTIONLAND_HPP
#define ACTIONLAND_HPP

#include "Land.hpp"
#include <string>

class ActionLand : public Land {
private:
    std::string name;

public:
    ActionLand(const std::string &name);
    std::string getName() const override;
    void action() override;
};

#endif // ACTIONLAND_HPP

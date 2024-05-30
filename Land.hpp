#ifndef LAND_HPP
#define LAND_HPP

#include <string>

class Land {
public:
    virtual std::string getName() const = 0;
    virtual void action() = 0;
    virtual ~Land() {}
};

#endif // LAND_HPP

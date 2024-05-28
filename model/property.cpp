#include <string>
using namespace std

class Property {
private:
    string name;
    int cost;
    int rent;
    int owner;

public:
    Property(string name, int cost, int rent)
        : name(name), cost(cost), rent(rent), owner(-1) {}

    string getName() const { return name; }
    int getCost() const { return cost; }
    int getRent() const { return rent; }
    int getOwner() const { return owner; }

    void setOwner(int newOwner) 
    { 
        owner = newOwner; 
    }
};

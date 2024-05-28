#include <string>
using namespace std

class Player {
private:
    string name;
    int money;
    int position;

public:
    Player(string name)
        : name(name), money(0), position(0) {}

    string getName() const { return name; }
    int getCost() const { return cost; }
    int getRent() const { return rent; }
    int getOwner() const { return owner; }

    void setOwner(int newOwner) { owner = newOwner; }
};

#include "Property.hpp"
#include "ActionLand.hpp"
#include <vector>
#include <memory>
#include <iostream>

int main() {
    std::vector<std::shared_ptr<Land>> board;

    board.push_back(std::make_shared<Property>("Boardwalk", 400, 50));
    board.push_back(std::make_shared<ActionLand>("Go to Jail"));
    board.push_back(std::make_shared<Property>("Park Place", 350, 35));
    board.push_back(std::make_shared<ActionLand>("Community Chest"));

    for (const auto& land : board) {
        std::cout << "Landing on: " << land->getName() << std::endl;
        land->action();
        std::cout << std::endl;
    }

    return 0;
}

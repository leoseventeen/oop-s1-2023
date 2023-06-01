#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>

int main() {
    Cell c(1, 2, 'A');
    std::cout << "Cell position: " << std::get<0>(c.getPos()) << ", " << std::get<1>(c.getPos()) << std::endl;
    std::cout << "Cell type: " << c.getType() << std::endl;

    auto pos = Utils::generateRandomPos(10, 10);
    std::cout << "Random position: " << std::get<0>(pos) << ", " << std::get<1>(pos) << std::endl;
    std::cout << "Distance between cell and random position: " << Utils::calculateDistance(c.getPos(), pos) << std::endl;

    return 0;
}

#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>

int main() {
    Cell cell(1, 2, 'A');

    // Test Cell
    std::cout << "Position: " << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << std::endl;
    std::cout << "Type: " << cell.getType() << std::endl;

    // Test Utils
    auto pos = Utils::generateRandomPos(10, 10);
    std::cout << "Random Position: " << std::get<0>(pos) << ", " << std::get<1>(pos) << std::endl;

    std::tuple<int, int> pos1 = std::make_tuple(1, 2);
    std::tuple<int, int> pos2 = std::make_tuple(4, 6);
    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance: " << distance << std::endl;

    return 0;
}
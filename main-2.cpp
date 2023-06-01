#include "Trap.h"
#include "Character.h"
#include "Utils.h"
#include <iostream>

int main() {
    Trap trap(3, 3);
    Character character(1, 1);

    std::cout << "Trap position: " << std::get<0>(trap.getPos()) << ", " << std::get<1>(trap.getPos()) << "\n";
    std::cout << "Character position: " << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << "\n";

    character.move(2, 2);
    std::cout << "Character moved to: " << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << "\n";

    double distance = Utils::calculateDistance(trap.getPos(), character.getPos());
    std::cout << "Distance between trap and character: " << distance << "\n";

    trap.apply(character);
    std::cout << "Character's new type (should be 'T' if trap is activated): " << character.getType() << "\n";
    std::cout << "Is trap still active?: " << (trap.isActive() ? "Yes" : "No") << "\n";

    return 0;
}

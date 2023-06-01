#include "Trap.h"
#include "Character.h"
#include <iostream>

int main() {
    Trap trap(5, 5);
    Character character(1, 2);

    character.move(4, 3);

    trap.apply(character);

    std::cout << "Trap Position: " << std::get<0>(trap.getPos()) << ", " << std::get<1>(trap.getPos()) << std::endl;
    std::cout << "Trap Active: " << (trap.isActive() ? "Yes" : "No") << std::endl;
    std::cout << "Character Position: " << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << std::endl;
    std::cout << "Character Type: " << character.getType() << std::endl;

    return 0;
}

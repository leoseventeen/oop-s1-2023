#include "Trap.h"
#include "Character.h"
#include <iostream>

int main() {
    Trap trap(5, 5);
    Character character(4, 4);
    character.move(1, 1);

    std::cout << "Trap position: " << std::get<0>(trap.getPos()) << ", " << std::get<1>(trap.getPos()) << std::endl;
    std::cout << "Character position: " << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << std::endl;

    if(trap.isActive() && trap.getPos() == character.getPos()) {
        trap.apply(character);
        std::cout << "Trap has been activated!" << std::endl;
    }

    std::cout << "Character type: " << character.getType() << std::endl;

    return 0;
}

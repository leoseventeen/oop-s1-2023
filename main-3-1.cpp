#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet af;
    AirCraft** fleet = af.get_fleet();

    for (int i = 0; i < 5; ++i) {
        std::cout << "Aircraft " << i + 1 << " weight: " << fleet[i]->get_weight() << std::endl;
    }

    return 0;
}

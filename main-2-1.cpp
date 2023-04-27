#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter h(5690, "Heli1");
    std::cout << "Initial weight: " << h.get_weight() << std::endl;
    std::cout << "Initial fuel: " << h.get_fuel() << std::endl;
    std::cout << "Initial number of flights: " << h.get_numberOfFlights() << std::endl;
    std::cout << "Initial name: " << h.get_name() << std::endl;

    h.fly(45, 10);
    std::cout << "Fuel after first flight: " << h.get_fuel() << std::endl;
    std::cout << "Number of flights after first flight: " << h.get_numberOfFlights() << std::endl;

    h.refuel();
    std::cout << "Fuel after refueling: " << h.get_fuel() << std::endl;

    return 0;
}

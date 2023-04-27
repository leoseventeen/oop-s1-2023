#include <iostream>
#include "AirCraft.h"

int main() {
    AirCraft ac(2000);
    std::cout << "Initial weight: " << ac.get_weight() << std::endl;
    std::cout << "Initial fuel: " << ac.get_fuel() << std::endl;
    std::cout << "Initial number of flights: " << ac.get_numberOfFlights() << std::endl;

    ac.fly(10, 60);
    std::cout << "Fuel after first flight: " << ac.get_fuel() << std::endl;
    std::cout << "Number of flights after first flight: " << ac.get_numberOfFlights() << std::endl;

    ac.refuel();
    std::cout << "Fuel after refueling: " << ac.get_fuel() << std::endl;

    return 0;
}

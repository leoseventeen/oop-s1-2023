#include <iostream>
#include "Airplane.h"

int main() {
    Airplane ap(10000, 100);
    std::cout << "Initial weight: " << ap.get_weight() << std::endl;
    std::cout << "Initial fuel: " << ap.get_fuel() << std::endl;
    std::cout << "Initial number of flights: " << ap.get_numberOfFlights() << std::endl;
    std::cout << "Initial number of passengers: " << ap.get_numPassengers() << std::endl;

    ap.fly(65, 120);
    std::cout << "Fuel after first flight: " << ap.get_fuel() << std::endl;
    std::cout << "Number of flights after first flight: " << ap.get_numberOfFlights() << std::endl;

    ap.reducePassengers(10);
    std::cout << "Number of passengers after reducing: " << ap.get_numPassengers() << std::endl;

    ap.refuel();
    std::cout << "Fuel after refueling: " << ap.get_fuel() << std::endl;

    return 0;
}

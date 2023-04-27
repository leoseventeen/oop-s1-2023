
#include "AirCraft.h"

AirCraft::AirCraft() {}

AirCraft::AirCraft(int w) : weight(w), fuel(100), numberOfFlights(0) {}

int AirCraft::get_weight() const {
    return weight;
}

void AirCraft::set_weight(int w) {
    weight = w;
}

float AirCraft::get_fuel() const {
    return fuel;
}

void AirCraft::set_fuel(float f) {
    fuel = f;
}

int AirCraft::get_numberOfFlights() const {
    return numberOfFlights;
}

void AirCraft::set_numberOfFlights(int n) {
    numberOfFlights = n;
}

void AirCraft::refuel() {
    fuel = 100;
}

void AirCraft::fly(int headwind, int minutes) {
    
    numberOfFlights++;
    
}

#include "Airplane.h"

Airplane::Airplane(){}

Airplane::Airplane(int w, int p):AirCraft(w),numPassengers(p){}

int Airplane::get_numPassengers() const{
    return numPassengers;
}

void Airplane::reducePassengers(int x){
    numPassengers -= x;
    if(numPassengers<0){
        numPassengers=0;
    }
}

void Airplane::fly(int headwind, int minutes) {
    float fuelConsumptionPerMinute = (headwind >= 60) ? 0.5 : 0.3;
    fuelConsumptionPerMinute += 0.001 * numPassengers;
    float totalFuelConsumption = fuelConsumptionPerMinute * minutes;

    if(get_fuel()-totalFuelConsumption >= 20){
        set_fuel(get_fuel()-totalFuelConsumption);
        set_numberOfFlights(get_numberOfFlights()+1);
    }
}
#include "Helicopter.h"

Helicopter::Helicopter(){}
Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {}

std::sttring Helicopter::get_name() const{
return name;
}

void Helicopter::set_name(const std::string n){
    name=n;
}

coid Helicopter::fly(int headwind, int minutes){
    float fuelConsumptionPerMinute=(headwind >= 40) ? 0.4:0.2;

    if(get_weight()>5670){
        fuelConsumptionPerMinute+=0.01*(get_weight-5670);    
    }

    float totalFuelConsumption = fuelConsumptionPerMinute * minutes;

if(get_fuel()-totalFuelConsumption>=20){
    set_fuel(get_fuel()-totalFuelConsumption);
    set_numberOfFlights(get_numberOfFlights()+1);
}
}


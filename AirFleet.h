#ifndef AIRFLEET_H
#define AIRFLEET_H
#include"AirCraft.h"
#include"Helicopter.h"
#include"Airplane.h"

class AirFeet{
    public:
    AirFleet();
    ~AirFleet();

    AirCraft** fleet;
};

#endif
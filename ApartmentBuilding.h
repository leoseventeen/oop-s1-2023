#ifndef APARTMENTBUILDING.H
#define APARTMENTBUILDING.H

#include "Unit.h"

class ApartmentBuilding{
    public:
    ApartmentBuilding();
    ApartmentBuilding(int capacity);
    ~ApartmentBuilding();

    int get_capacity();
    int get_current_number_of_units();
    Unit * get_contents();

    bool add_unit(Unit unit);

    private:
    int capacity;
    int current_number_of_units;
    Unit*contents;
    
}
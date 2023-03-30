#include <iostream>
#include "ApartmentBuilding.h"

using namespace std;

ApartmentBuilding::ApartmentBuilding() {
    capacity = 10;
    current_number_of_units = 0;
    contents = new Unit[capacity];
}

ApartmentBuilding::ApartmentBuilding(int capacity) {
    this->capacity = capacity;
    current_number_of_units = 0;
    contents = new Unit[capacity];
}

ApartmentBuilding::~ApartmentBuilding() {
    delete[] contents;
}

int ApartmentBuilding::get_capacity() {
    return capacity;
}

int ApartmentBuilding::get_current_number_of_units() {
    return current_number_of_units;
}

Unit * ApartmentBuilding::get_contents() {
    return contents;
}

bool ApartmentBuilding::add_unit(Unit unit) {
    if (current_number_of_units < capacity) {
        contents[current_number_of_units] = unit;
        current_number_of_units++;
        return true;
    } else {
        cout << "Apartment building is at maximum capacity." << endl;
        return false;
    }
}

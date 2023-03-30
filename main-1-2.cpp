#include <iostream>
#include "ApartmentBuilding.h"

using namespace std;

int main() {
   
    ApartmentBuilding building1;
    cout << "Default constructor:" << endl;
    cout << "Capacity: " << building1.get_capacity() << endl;
    cout << "Current number of units: " << building1.get_current_number_of_units() << endl << endl;


    ApartmentBuilding building2(5);
    cout << "Constructor with parameter:" << endl;
    cout << "Capacity: " << building2.get_capacity() << endl;
    cout << "Current number of units: " << building2.get_current_number_of_units() << endl << endl;


    Unit unit1(500000, 2, 80.0);
    Unit unit2(750000, 3, 100.0);
    Unit unit3(1000000, 4, 120.0);

    cout << "Add_unit method:" << endl;
    building2.add_unit(unit1);
    building2.add_unit(unit2);
    building2.add_unit(unit3);
    building2.add_unit(unit3); 

    cout << "Current number of units: " << building2.get_current_number_of_units() << endl;


    Unit * units = building2.get_contents();
    cout << "Units in building:" << endl;
    for (int i = 0; i < building2.get_current_number_of_units(); i++) {
        cout << "Unit " << i+1 << " value: " << units[i].get_value() << endl;
    }

    return 0;
}

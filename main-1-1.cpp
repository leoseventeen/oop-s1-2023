#include <iostream>
#include "Unit.h"

using namespace std;

int main() {
  
    Unit unit1;
    cout << "Default constructor:" << endl;
    cout << "Number of bedrooms: " << unit1.get_num_bedrooms() << endl;
    cout << "Value: " << unit1.get_value() << endl;
    cout << "Area: " << unit1.get_area() << endl << endl;


    Unit unit2(-1000, 2, 60.0);
    cout << "Constructor with parameters:" << endl;
    cout << "Number of bedrooms: " << unit2.get_num_bedrooms() << endl;
    cout << "Value: " << unit2.get_value() << endl;
    cout << "Area: " << unit2.get_area() << endl << endl;

    // Test getters
    cout << "Getters:" << endl;
    cout << "Number of bedrooms: " << unit2.get_num_bedrooms() << endl;
    cout << "Value: " << unit2.get_value() << endl;
    cout << "Area: " << unit2.get_area() << endl;

    return 0;
}

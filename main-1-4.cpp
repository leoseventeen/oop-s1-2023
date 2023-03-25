#include <iostream>
#include "Person.h"

int main() {
    PersonList pl1;
    pl1.numPeople = 3;
    pl1.people = new Person[3];
    for (int i = 0; i < pl1.numPeople; i++) {
        pl1.people[i].name = "John Doe";
        pl1.people[i].age = 0;
    }

    PersonList pl2 = shallowCopyPersonList(pl1);

    std::cout << "Address of pl1.people: " << pl1.people << std::endl;
    std::cout << "Address of pl2.people: " << pl2.people << std::endl;

    // Clean up memory
    delete[] pl1.people;
    delete[] pl2.people;

    return 0;
}

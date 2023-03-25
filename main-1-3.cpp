#include <iostream>
#include "Person.h"

int main() {
    int n = 2;
    PersonList originalList = createPersonList(n);
    std::cout << "Original list:" << std::endl;
    std::cout << "Number of people in list: " << originalList.numPeople << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << " name: " << originalList.people[i].name << ", age: " << originalList.people[i].age << std::endl;
    }

    PersonList copiedList = deepCopyPersonList(originalList);
    std::cout << "\nCopied list:" << std::endl;
    std::cout << "Number of people in list: " << copiedList.numPeople << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << " name: " << copiedList.people[i].name << ", age: " << copiedList.people[i].age << std::endl;
    }

    // Change name and age of the first person in the original list
    originalList.people[0].name = "Changed Name";
    originalList.people[0].age = 99;

    std::cout << "\nOriginal list after changing the first person's name and age:" << std::endl;
    std::cout << "Number of people in list: " << originalList.numPeople << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << " name: " << originalList.people[i].name << ", age: " << originalList.people[i].age << std::endl;
    }

    std::cout << "\nCopied list after changing the first person's name and age in the original list:" << std::endl;
    std::cout << "Number of people in list: " << copiedList.numPeople << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i+1 << " name: " << copiedList.people[i].name << ", age: " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;
    delete[] copiedList.people;
    return 0;
}
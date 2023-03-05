#include <iostream>

extern int count(int array[], int n, int number);

int main() {
    int array[5] = {1,2,3,4,5};
    int number = 2;
    std::cout << "The no. of elements in the array equal to " << number << " is: " << count(array, 5, number) << std::endl;
}

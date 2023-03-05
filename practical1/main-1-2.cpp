#include <iostream>

extern double average(int array[], int n);

int main() {
    int array[2] = {1,2};
    std::cout << "The average of the elements in the array is: " << average(array, 2) << std::endl;
}

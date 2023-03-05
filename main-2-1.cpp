#include <iostream>

extern int minimum(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};
    std::cout << "The smallest number in the array is: " << minimum(array, 5) << std::endl;
}

#include <iostream>

extern int sum_array(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};
    std::cout << "The sum of the elements in the array is: " << sum_array(array, 5) << std::endl;
}

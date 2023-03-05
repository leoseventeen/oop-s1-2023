#include <iostream>

extern int maximum(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};
    std::cout << "The biggest number in the array is: " << maximum(array, 5) << std::endl;
}

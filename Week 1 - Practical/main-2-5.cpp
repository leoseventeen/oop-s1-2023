#include <iostream>

extern bool descending(int array[], int n);

int main() {
    int n = 5;
    int array[5] = {5,4,3,2,1};
    std::cout << descending(array, n) << std::endl;
}
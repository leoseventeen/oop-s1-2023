#include <iostream>

extern int sumtwo(int array[], int secondarray[], int n);

int main() {
    int array1[5] = {1,2,3,4,5};
    int array2[5] = {1,2,3,4,5};
    std::cout << "The sum of both arrays is: " << sumtwo(array1, array2, 5) << std::endl;
}

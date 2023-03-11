#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main() {

    int array[4][4] = {{0,1,2,3},
                       {1,2,3,0},
                       {2,3,0,1},
                       {3,0,1,2}};
int diagonal_sum = sum_diagonal(array);

    std::cout << "The sum of integers in main diagonal (top left to bottom right) is: " << diagonal(array) << std::endl;

}
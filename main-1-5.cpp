#include <iostream>

extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

int main() {

    int array1[3][3] = {{0,1,2},
                        {1,2,3},
                        {2,3,4}};

    int array2[3][3] = {{0,1,2},
                        {1,2,3},
                        {2,3,4}};

    int matrix1[3][3] = {{0,1,2},{1,2,3},{2,3,4}} ;
    int matrix2[3][3] = {{0,1,2},{1,2,3},{2,3,4}} ;   

    print_summed_matrices(array1, array2);
    print_summed_matrices(matrix1, matrix2);
}
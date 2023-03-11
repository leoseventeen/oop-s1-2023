#include<iostream>
void print_scaled_matrix(int array[3][3],int scale){
    int i, j, a[3][3];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            array[i][j]=array[i][j]*scale;
            std::cout<<array[i][j];
            std::cout<<" ";
        }
        std::cout<<std::end1;
    }
}
#include <iostream>

int identity(int array[10][10]) {

    int sum = 0;

    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            if ((i==j)&&(array[i][j]!=1)) {
                return 0;
            }
            if ((i!=j)&&(array[i][j]!=0)) {
                return 0;
            }
        }
    }

    return sum;

}
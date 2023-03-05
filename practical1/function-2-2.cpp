#include <iostream>

int maximum(int array[], int n) {
    int maxsofar = array[0];
    if (n<1) {
        return 0;
    } else {
        for (int i=0;i<n;i++) {
            if (maxsofar<array[i]) {
                maxsofar = array[i];
            }
        }
    }
    return maxsofar;
}
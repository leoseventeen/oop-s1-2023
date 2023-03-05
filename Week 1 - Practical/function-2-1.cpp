#include<iostream>
int minimum(int array[], int n) {
    int minsofar = array[0];
    if (n<1) {
        return 0;
    } else {
        for (int i=0;i<n;i++) {
            if (minsofar>array[i]) {
                minsofar = array[i];
            }
        }
    }
    return minsofar;
}

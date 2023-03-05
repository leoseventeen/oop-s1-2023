#include <iostream>

bool descending(int array[], int n) {

    if (n<1) {
        return 0;
    }

    int count = 1;

    for (int i=1;i<n;i++) {
        if (array[i]<=array[i-1]) {
            count++;
        }
        
    }
    
    if (count==n) {
        return 1;
    } else {
        return 0;
    }

}
    


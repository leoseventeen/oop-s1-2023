#include <iostream>

using namespace std;

void count_digits(int array[4][4]) {
    int counts[10] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int digit = array[i][j];
            counts[digit]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << i << ":" << counts[i] << ";";
    }
    cout << endl;
}
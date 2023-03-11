#include <iostream>

using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits) {
    int result = 0;
    for (int i = 0; i < number_of_digits; ++i) {
        result *= 2;
        result += binary_digits[i];
    }
    return result;
}

int main() {
    int arr[] = {1, 0, 1, 0, 0};
    cout << binary_to_number(arr, 5) << endl;
    return 0;
}
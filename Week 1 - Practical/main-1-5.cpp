#include <iostream>

extern int count_even(int number);

int main() {
    int number = 10;
    std::cout << "The no. of even numbers between 1 and " << number << " (inclusive) is: " << count_even(number) << std::endl;
}

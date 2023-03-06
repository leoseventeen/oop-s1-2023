#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> num1("01100110"); 
    bitset<8> num2("11001011"); 
    
    
    bitset<8> sum = num1 + num2;
    cout << "Sum: " << sum.to_string() << endl;
    

    bitset<8> diff = num1 - num2;
    cout << "Difference: " << diff.to_string() << endl;

    return 0;
}

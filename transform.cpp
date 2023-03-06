#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int decimal = 42; 
    bitset<8> binary(decimal); 
    cout << "Decimal: " << decimal << endl;
    cout << "Binary: " << binary.to_string() << endl;
    return 0;
}

#include <iostream>
using namespace std;

int add(int lhs, int rhs) {
    return lhs + rhs;
}

int main(){
    
    if (add(1, 2) != 3)
    cout << "Test 1 failed!" << endl;
    else cout << "Test 1 passed!" << endl; 
    if (add(9, 5) != 14)
    cout << "Test 2 failed!" << endl;
    else cout << "Test 2 passed!" << endl; 
    if (add(6, 8) != 14)
    cout << "Test 3 failed!" << endl;
    else cout << "Test 3 passed!" << endl; 
    if (add(12, 65) != 77)
    cout << "Test 4 failed!" << endl;
    else cout << "Test 4 passed!" << endl; 
    if (add(11, 23) != 34)
    cout << "Test 5 failed!" << endl;
    else cout << "Test 5 passed!" << endl; 
    
    return 0;
} 
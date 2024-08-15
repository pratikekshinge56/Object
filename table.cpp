#include <iostream>
using namespace std;

int main() {
    int num1;
    
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "\nMultiplication table for " << num1 << ":\n";
    for(int i = 1; i <= 10; i++) {
        cout << num1 << " x " << i << " = " << num1 * i << endl;
    }
    
    
    return 0;
}
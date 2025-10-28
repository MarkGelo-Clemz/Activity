#include <iostream>
using namespace std;

int main() {
    int num, exponent, result = 1; // still the same as problem 2 and 3. but add another condition = 1
    
    cout << "Enter the base: ";
    cin >> num;
    
    cout << "Enter exponent: ";
    cin >> exponent;
    
    for (int i = 1; i <= exponent; i++){ // A for loop multiplies result by base repeatedly for as many times as the user inputted.
        result *= num;
    }
    cout << num << "^" << exponent << " = " << result << endl;
    
    return 0;
}

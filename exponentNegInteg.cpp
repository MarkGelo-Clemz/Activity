#include <iostream>

using namespace std;

int main () {
    float num, result = 1;
    int exponent, positive;
    
    cout << "Enter base: ";
    cin >> num;
    
    cout << "Enter exponent: ";
    cin >> exponent;
    
    if (exponent >= 0){ // for positive integers
        for (int i = 1; i <= exponent; i++){
            cout << result << " x " << num;
            result *= num;
            cout << " = " << result << endl;
        }
    } else { // for negative integers
        positive = -exponent; // to convert it into positive
        for (int i = 1; i <= positive; i++){
            cout << result << " x " << num;
            result *= num;
            cout << " = " << result << endl;
        }
        result = 1 / result; // takes the reciprocal
    }
    cout << num << "^" << exponent << " = " << result << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num, exponent, result = 1; // the same as problem 4, you just need to print  every output/result
    
    cout << "Enter the base: ";
    cin >> num;
    
    cout << "Enter exponent: ";
    cin >> exponent;
    
    for (int i = 1; i <= exponent; i++){ // repeats the calculations
        cout << result << " x " << num; // stating the first output
        result *= num; // after the output  it calculate given numbers and stores it here
        cout << " = " << result << endl; // every result will  be printed here and it will do it again in a loop

    }
    cout << num << "^" << exponent << " = " << result << endl;
    // *hindi po talaga ako magaling mag explain
    return 0;
}

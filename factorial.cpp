#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1; // set factorial as  1
    
    cout << "Enter a number: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++){ // use a loop i = 1 is the star and i <= num is up to what the user input
        factorial *= i; // next, multiply factorial with the user' input
    }
    cout << "The factorial of: " << num << " is " << factorial << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num, even = 0, odd = 0; // let both even and odd = 0

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) { // i = 0 since starting from zero. i < all up to 10, i++ add in every row
        cin >> num;
        if (num % 2 == 0) // % is for determining the remainder when divided by 2. if its  equal to 0 its even an if not its odd
            even++; // it  adds if the number is even
        else
            odd++; // adds up if the number is odd
    }
    cout << "Even numbers: " << even << endl; 
    cout << "Odd numbers: " << odd << endl;


    return 0;
}

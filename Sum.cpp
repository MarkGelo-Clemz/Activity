#include <iostream>
using namespace std; // this is the same as problem 2 but you need to change the sign

int main() {
    int num, sum = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++){
        sum += i;
    }
    cout << "The sum of: " << num << " is " << sum << endl;
    
    return 0;
}

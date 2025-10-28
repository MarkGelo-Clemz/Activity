#include <iostream> // just use the method of making a right triangle, but instead of "*", replace it by i
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    for  (int i = 1; i <= num; i++){ // i = 1, starts from 1 all the way up to the users input number
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

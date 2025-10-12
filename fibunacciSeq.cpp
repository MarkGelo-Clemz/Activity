#include <iostream>

using namespace std;

int main () {
    float n;
    int a = 0, b = 1;
    
    cout << "=====Fibunacci Sequence=====" << endl;
    cout << "Input a number: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}
    
}

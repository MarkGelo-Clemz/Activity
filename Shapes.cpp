#include <iostream>

using namespace std;

int main () {
    int n = 10;
    char choice;
    
    cout << "=====SHAPES=====" << endl;
    cout << "1. Pyramid" << endl;
    cout << "2. Inverted Pyramid" << endl;
    cout << "3. Diamond" << endl;
    cout << "4. Rectangle" << endl;
    cout << "================" << endl;
    cout << "Choose an option: ";
    cin >> choice;
    
    switch (choice) {
        case '1':
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    break;
    
    case '2':
    for (int i = n; i >= 1; i--){
        for (int j = i; j <= n; j++){
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    break;
    
    case '3':
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--){
        for (int j = i; j <= n; j++){
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    break;
    
    case '4':
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
        
        }
            break;
    }
    
    return 0;
    }
    
    

    




#include <iostream>

using namespace std;

int main () {
    float bar1 = 100000, psi1 = 6894.76, result, pascal, psi;
    char again, choice;
    do {
        cout << "=== Pressure Unit Converter ===" << endl;
        cout << "1. Pascal to Bar" << endl;
        cout << "2. Pascal to PSI" << endl;
        cout << "3. Bar to Pascal" << endl;
        cout << "4. PSI to Pascal" << endl;
        cout << "5. Exit" << endl;
        cout << "-------------------------------" << endl;
        cout << "Choose an operation: ";
        cin >> choice;
        
        switch(choice){
            case '1':
            cout << "Enter value in Pascal: ";
            cin >> pascal;
            
            result = pascal / bar1;
            cout << "Result: " << result << " " << "bar";
            break;
            
             case '2':
            cout << "Enter value in Pascal: ";
            cin >> pascal;
            
            result = pascal / psi1;
            cout << "Result: " << result << " " << "pascal";
            break;
            
             case '3':
            cout << "Enter value in Pascal: ";
            cin >> pascal;
            
            result = pascal * bar1;
            cout << "Result: " << result << " " << "bar";
            break;
            
             case '4':
            cout << "Enter value in Pascal: ";
            cin >> pascal;
            
            result = pascal * psi1;
            cout << "Result: " << result << " " << "bar";
            break;
            
            default:
            cout << "Invalid Choice";
            break;
        }

            cout << "\nDo you want to convert again? (1-Yes, 0-No): ";
            cin >> again;
            
            switch (again){
                case '0':
                cout << "Thank you for using the Pressure Converter!";
                break;
                
                default:
                cout << "Invalid choice";
                break;
            }
            
        }
        
    while(again == '1');
    return 0;
}
    

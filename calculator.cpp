#include <iostream>

using namespace std;

int main () {
    float num1, num2, sum;
    char again, choice;
    do {
        cout << "---SIMPLE CALCULATOR---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "-----------------------" << endl;
        cout << "Choose an operation: ";
        cin >> choice;

        
        switch (choice){
            case '1':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter Second number: ";
            cin >> num2;
            
            sum = num1 + num2;
            cout << "Result: " << sum << " ";
            break;
            
            case '2':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter Second number: ";
            cin >> num2;
            
            sum = num1 - num2;
            cout << "Result: " << sum << " ";
            break;
            
            case '3':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter Second number: ";
            cin >> num2;
            
            sum = num1 * num2;
            cout << "Result: " << sum << " ";
            break;
            
            case '4':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter Second number: ";
            cin >> num2;
            
            if (num2 == 0){
                cout << "Invalid choice";
            } else{
            
            sum = num1 / num2;
            cout << "Result: " << sum << " ";
            }
            break;
            
            case '5':
            cout << "Exciting program... ";
            break;
            
            default:
            cout << "Invalid input";
            break;
        }
        cout << "\ndo you want to solve again?(y/n): ";
        cin >> again;
        
        switch (again){
            case 'N':
            case 'n':
            cout << "Exciting Program...";
            break;
        }
    }
    while(again == 'Y' || again == 'y');
    return 0;
}
    

#include <iostream>

using namespace std;

int main () {
    float balance = 10000, deposit, withdraw, total;
    char again, choice;
    do {
        cout << "---------Bank---------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "-----------------------" << endl;
        cout << "Choose an operation: ";
        cin >> choice;

        
        if (choice == '1'){
            cout << "Your current balance is: ₱" << balance << " ";
        }
            
            else if (choice == '2'){
            cout << "Input deposit: ";
            cin >> deposit;
            
            if (deposit == 0){
                cout << "You cannot input 0 deposit" << endl;
            }else {
                balance = deposit + balance;
                cout << "Your current balance is: ₱" << balance << " ";
            }
            }
            
            else if(choice == '3'){
            cout << "Put amount to withdraw: ";
            cin >> withdraw;
            
           if (withdraw > balance){
               cout << "Insufficient balance";
           }
           else {
               balance = balance - withdraw;
               cout << "Your current balance is: ₱" << balance << " ";
           }
            }
           
            else if(choice == '4'){
            cout << "Exciting program...";
            }
            
            else{
            cout << "Invalid input";
            }
            cout << "\nDo you want to choose again?(y/n): ";
            cin >> again;
            
            switch (again){
                case 'N':
                case 'n':
                cout << "Thank you for using our ATM";
                break;
            }
            
        }
        
    while(again == 'Y' || again == 'y');
    return 0;
}
    

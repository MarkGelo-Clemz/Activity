#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0){ // checks if the number is not positive
        cout << "Please enter a positive integer." << endl;
        return 0; // if not positive, program ends 
}

    if (n % 2 == 0){ // if number is even
   
        cout << "Even number detected. Printing square pattern:\n" << endl;
        for (int i = 0; i < n; i++){ // outer loopd that controls the number of rows
            for (int j = 0; j < n; j++){ // inner loop that controls the columns
                cout << "* ";
}
            cout << endl; // move to the next row(wag kalang mag move sa'kin)
}
} 
    else{ // if number is odd(kapag may kakaiba ka nang nararamdaman)
  
        cout << "odd number detected. Printing triangle pattern:\n";
        for (int i = 1; i <= n; i++){ // controls the number of rows(kaya pati ako na control)
            for (int j = 1; j <= i; j++){ // inner loop print "* " up to current row number
                cout << "* ";
}
            cout << endl;
}
}

    return 0;
}

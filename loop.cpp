#include <iostream>
using namespace std;

int main () {
int n;

cout << "Enter a number: ";
cin >> n;

for (int i = 1; i <= n; i++){ // n = 3. from 1 to 3. Outer loop controls the row to 1 to n
for (int j = 1; j <= n; j++){ // n = 3. from 1 to 3. Inner loop controls the column from 1 to n
cout << i * j; // display product

if (i * j < 10){ // adds 3 spaces if product < 10
cout << " ";
}
else if (i * j < 100){ // adds 2 spaces if product < 100
cout << " ";
}
else{ // add 1 space if product >= 100
cout << " ";
}
}
cout << endl; // move to the next row after the innr loop
}
return 0;
}

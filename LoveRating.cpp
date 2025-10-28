#include <iostream>
using namespace std;

int main () {
    int physical, eq, finance, hygiene, confi, num;
    
    cout << "===== DANIELA'S LOVER RATING SYSTEM =====" << endl;
    cout << "Enter number of lovers to rate: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++){
            cout << "--- Lover #" << i << " ---" << endl;
            cout << "Physical Appearance: ";
            cin >> physical;
            
            cout << "Emotional Intelligence: ";
            cin >> eq;
            
            cout << "Finance: ";
            cin >> finance;
            
            cout << "Hygiene: ";
            cin >> hygiene;
            
            cout << "Confidence: ";
            cin >> confi;
            
            float average;
            average = physical + eq + finance + hygiene + confi;
            average = average / 5;
            
            cout << "Average score: " << average << endl;
            
            if (average >= 100){
                cout << "Rating: 💘 Excellent Lover" << endl;
            }
            else if (average >= 89){
                cout << "Rating: 💞 Great Lover" << endl;
            }
            else if (average >= 79){
                cout << "Rating: 💓 Good Lover" << endl;
            }
            else if (average >= 69){
                cout << "Rating: 💔 Needs Improvement" << endl;
            }
            else {
                cout << "Rating: 🚫 Not Lover Material" << endl;
            }
            
            for (int k = 1; k <+ 1; k++){
                for (int j = 1; j < k; j++)
                cout << " ";
            }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    const string correctCode = "BEE208";
    string userCode;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> userCode;

        if (userCode == correctCode) {
            cout << "Access granted." << endl;
            return 0; 
        } else {
            attempts++;
            if (attempts < 3) {
                cout << "Incorrect code. Try again." << endl;
            }
        }
    }

    cout << "Access denied. Maximum attempts reached." << endl;

    return 0;
}

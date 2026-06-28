#include <iostream>
using namespace std;

int main() {
    double resistance;

    cout << "Enter earth resistance readings (Ohms):" << endl;

    
    cin >> resistance;

    while (resistance <= 5) {
        cout << "Resistance is within safe limit. Enter next reading: ";
        cin >> resistance;
    }

    cout << "\nEarth resistance too high. Improve earthing system." << endl;

    return 0;
}

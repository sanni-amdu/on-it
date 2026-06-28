#include <iostream>
using namespace std;

int main() {
    double resistance;

    cout << "Enter up to 10 insulation resistance readings (in megaohms):\n";

    for (int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> resistance;

        if (resistance < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break; 
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}

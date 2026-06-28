#include <iostream>
using namespace std;

int main() {
    double power, totalLoad = 0;

    cout << "Enter up to 20 appliance power ratings (in watts):\n";

    for (int i = 1; i <= 20; i++) {
        cout << "Appliance " << i << ": ";
        cin >> power;

        totalLoad += power;

        if (totalLoad > 5000) {
            cout << "\nMaximum load exceeded. Stop adding appliances." << endl;
            break; 
        }
    }

    cout << "\nFinal Total Load = " << totalLoad << " watts" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Enter solar panel voltage readings (V):" << endl;

    cin >> voltage;

    while (voltage >= 18) {
        cout << "Voltage is within operating level. Enter next reading: ";
        cin >> voltage;
    }

    cout << "\nSolar panel voltage below operating level." << endl;

    return 0;
}

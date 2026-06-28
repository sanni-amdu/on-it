#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter motor temperature readings (°C):" << endl;

    cin >> temperature;

    while (temperature <= 90) {
        cout << "Temperature is safe. Enter next reading: ";
        cin >> temperature;
    }

    cout << "\nMotor temperature unsafe. Stop motor test." << endl;

    return 0;
}

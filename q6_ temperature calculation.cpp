#include <iostream>
using namespace std;

int main() {
    int choice;
    double primaryTurns, secondaryTurns;
    double primaryVoltage, secondaryVoltage, turnsRatio;

    cout << "=== Transformer Calculation Menu ===" << endl;
    cout << "1. Calculate turns ratio" << endl;
    cout << "2. Calculate secondary voltage" << endl;
    cout << "3. Calculate primary voltage" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;

            turnsRatio = primaryTurns / secondaryTurns;
            cout << "Turns Ratio = " << turnsRatio << endl;
            break;

        case 2:
            cout << "Enter primary voltage: ";
            cin >> primaryVoltage;
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;

            secondaryVoltage = primaryVoltage * secondaryTurns / primaryTurns;
            cout << "Secondary Voltage = " << secondaryVoltage << " V" << endl;
            break;

        case 3:
            cout << "Enter secondary voltage: ";
            cin >> secondaryVoltage;
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;

            primaryVoltage = secondaryVoltage * primaryTurns / secondaryTurns;
            cout << "Primary Voltage = " << primaryVoltage << " V" << endl;
            break;

        default:
            cout << "Invalid choice! Please select between 1 and 3." << endl;
    }

    return 0;
}

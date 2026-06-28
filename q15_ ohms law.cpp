#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;

    do {
        cout << "\nEnter voltage (V): ";
        cin >> voltage;

        cout << "Enter current (A): ";
        cin >> current;
    
        resistance = voltage / current;

        cout << "Resistance = " << resistance << " ohms" << endl;

        cout << "\nDo you want to continue? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nProgram terminated." << endl;

    return 0;
}

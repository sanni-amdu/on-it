#include <iostream>
using namespace std;

int main() {
    double voltage, current, power;
    char choice;

    do {
        cout << "\nEnter voltage (V): ";
        cin >> voltage;

        cout << "Enter current (A): ";
        cin >> current;

        power = voltage * current;

        cout << "DC Power = " << power << " watts" << endl;

        cout << "\nDo you want to perform another calculation? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nProgram terminated." << endl;

    return 0;
}

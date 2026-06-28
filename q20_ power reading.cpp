#include <iostream>
using namespace std;

int main() {
    double power, total = 0;

    cout << "Enter 10 power readings:\n";

    for (int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> power;

        if (power < 0) {
            cout << "Invalid reading skipped." << endl;
            continue; 
        }

        total += power; 
    }

    cout << "\nTotal of valid power readings = " << total << endl;

    return 0;
}

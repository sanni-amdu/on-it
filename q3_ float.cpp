#include <iostream>
using namespace std;

int main() {
    float ratedCurrent, startingCurrent;

    cout << "Enter the rated current of the motor: ";
    cin >> ratedCurrent;

    cout << "Enter the starting current of the motor: ";
    cin >> startingCurrent;

    if (startingCurrent > 3 * ratedCurrent) {
        cout << "High starting current. Use proper motor starter." << endl;
    } else {
        cout << "Starting current is acceptable." << endl;
    }

    return 0;
}

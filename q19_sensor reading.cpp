#include <iostream>
using namespace std;

int main() {
    double reading, sum = 0;
    int validCount = 0;

    cout << "Enter 12 sensor readings:\n";

    for (int i = 1; i <= 12; i++) {
        cout << "Reading " << i << ": ";
        cin >> reading;

        if (reading == 999) {
        
            continue;
        }

        sum += reading;
        validCount++;
    }

    if (validCount > 0) {
        double average = sum / validCount;
        cout << "\nAverage of valid readings = " << average << endl;
    } else {
        cout << "\nNo valid readings entered." << endl;
    }

    return 0;
}

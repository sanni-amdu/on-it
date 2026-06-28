#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "=== Measurement Unit Conversion Menu ===" << endl;
    cout << "1. Convert volts to millivolts" << endl;
    cout << "2. Convert amperes to milliamperes" << endl;
    cout << "3. Convert kilowatts to watts" << endl;
    cout << "4. Convert ohms to kilo-ohms" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter value in volts: ";
            cin >> value;
            result = value * 1000; 
            cout << "Result: " << result << " millivolts" << endl;
            break;

        case 2:
            cout << "Enter value in amperes: ";
            cin >> value;
            result = value * 1000; 
            cout << "Result: " << result << " milliamperes" << endl;
            break;

        case 3:
            cout << "Enter value in kilowatts: ";
            cin >> value;
            result = value * 1000; 
            cout << "Result: " << result << " watts" << endl;
            break;

        case 4:
            cout << "Enter value in ohms: ";
            cin >> value;
            result = value / 1000;
            cout << "Result: " << result << " kilo-ohms" << endl;
            break;

        default:
            cout << "Invalid choice! Please select between 1 and 4." << endl;
    }

    return 0;
}

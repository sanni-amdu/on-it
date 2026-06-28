#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Fuse Rating Menu:" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;

    cout << "Select an option (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Application: Small electronic devices (e.g., radios, small lamps)." << endl;
            break;
        case 2:
            cout << "Application: Lighting circuits and small appliances." << endl;
            break;
        case 3:
            cout << "Application: Domestic sockets and general household appliances." << endl;
            break;
        case 4:
            cout << "Application: Medium-sized equipment and power tools." << endl;
            break;
        case 5:
            cout << "Application: Heavy-duty appliances (e.g., electric cookers, air conditioners)." << endl;
            break;
        default:
            cout << "Invalid selection. Please choose a number between 1 and 5." << endl;
    }

    return 0;
}

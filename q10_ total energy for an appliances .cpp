#include <iostream>
using namespace std;

int main() {
    double power, time, energy;
    double totalEnergy = 0;

    cout << "Enter the power rating (in watts) and usage time (in hours) for 8 appliances:\n";

    for(int i = 1; i <= 8; i++) {
        cout << "\nAppliance " << i << endl;

        cout << "Power (watts): ";
        cin >> power;

        cout << "Time (hours): ";
        cin >> time;

        energy = power * time; 
        totalEnergy += energy;  
    }

    cout << "\nTotal Energy Consumed = " << totalEnergy << " watt-hours (Wh)" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double wattage, totalLoad = 0;

    cout << "Enter the wattage of 12 lighting points:\n";

    for(int i = 1; i <= 12; i++) {
        cout << "Lighting point " << i << ": ";
        cin >> wattage;
        totalLoad += wattage; 
    }

    cout << "\nTotal Lighting Load = " << totalLoad << " watts" << endl;

    return 0;
}

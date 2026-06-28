#include <iostream>
using namespace std;

int main() {
    int result;
    int passCount = 0, failCount = 0;

    cout << "Enter results for 15 electronic components (1 = Pass, 0 = Fail):\n";

    for(int i = 1; i <= 15; i++) {
        cout << "Component " << i << ": ";
        cin >> result;

        if(result == 1) {
            passCount++;  
        } else {
            failCount++;  
        }
    }

    cout << "\nNumber of Passed Components: " << passCount << endl;
    cout << "Number of Failed Components: " << failCount << endl;

    return 0;
}

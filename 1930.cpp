#include <iostream>
using namespace std;

int main() {
    int strip1, strip2, strip3, strip4;

    cin >> strip1 >> strip2 >> strip3 >> strip4;

    // Calculate the total number of devices that can be connected
    // Subtract 3 because connecting the strips will occupy one socket on each of the first three strips
    int totalDevices = (strip1 + strip2 + strip3 + strip4) - 3;


    cout << totalDevices << endl;

    return 0;
}

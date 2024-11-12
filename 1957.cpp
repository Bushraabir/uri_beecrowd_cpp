#include <iostream>
#include <iomanip> // For hex and uppercase formatting
using namespace std;

int main() {
    unsigned long long decimalNumber; // for large input


    cin >> decimalNumber;


    cout << uppercase << hex << decimalNumber << endl;

    return 0;
}

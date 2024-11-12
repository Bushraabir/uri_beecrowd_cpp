#include <iostream>
#include <iomanip> // For setprecision and scientific formatting
using namespace std;

int main() {
    double inputNumber;


    cin >> inputNumber;


    // output
    cout << showpos << scientific << setprecision(4) << uppercase << inputNumber << endl;

    return 0;
}

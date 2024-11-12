#include <iostream>
using namespace std;

int main() {
    int monthNumber;
    cin >> monthNumber;

    // Array of month
    string months[] = {"", "January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    // Output the month corresponding to the input number
    cout << months[monthNumber] << endl;

    return 0;
}


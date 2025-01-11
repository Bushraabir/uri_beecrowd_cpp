#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string word;
        getline(cin, word);


        double time = word.length() * 0.01;


        cout << fixed << setprecision(2) << time << endl;
    }

    return 0;
}


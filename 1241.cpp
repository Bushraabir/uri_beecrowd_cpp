#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; // Number of test cases
    cin >> n;

    while (n--) {
        string a, b;
        cin >> a >> b;

        // Check if b fits at the end of a
        if (a.size() >= b.size() && a.substr(a.size() - b.size()) == b) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}

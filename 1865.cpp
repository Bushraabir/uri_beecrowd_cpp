#include <iostream>
#include <string>
using namespace std;

int main() {
    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        string name;
        int force;
        cin >> name >> force;

        if (name == "Thor") {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}

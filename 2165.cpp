
#include <iostream>
#include <string>
using namespace std;

int main() {
    string T;
    getline(cin, T);

    if (T.size() <= 140) {
        cout << "TWEET" << endl;
    } else {
        cout << "MUTE" << endl;
    }

    return 0;
}

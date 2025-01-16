#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;


    if (score == 0) {
        cout << "E" << endl;
    } else if (score > 0 && score <= 35) {
        cout << "D" << endl;
    } else if (score > 35 && score <= 60) {
        cout << "C" << endl;
    } else if (score > 60 && score <= 85) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ara(n);

    for (int i = 0; i < n; i++) {
        cin >> ara[i];
    }

    bool isPattern = true;

    if (n == 2 && ara[0] == ara[1]) {
        isPattern = false;
    } else {
        for (int i = 2; i < n; i++) {
            if ((ara[i] >= ara[i - 1] && ara[i - 1] >= ara[i - 2]) ||
                (ara[i] <= ara[i - 1] && ara[i - 1] <= ara[i - 2])) {
                isPattern = false;
                break;
            }
        }
    }

    cout << (isPattern ? "1" : "0") << endl;
    return 0;
}

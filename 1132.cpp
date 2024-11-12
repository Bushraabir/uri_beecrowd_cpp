
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;


    if (x > y) {
        swap(x,y);//x is the smallest
    }

    int sum = 0;


    for (int i = x; i <= y; i++) {
        // Add  to sum if it's not divisible by 13
        if (i % 13 != 0) {
            sum += i;
        }
    }

    // output
    cout << sum << endl;

    return 0;
}

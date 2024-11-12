#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        swap(x,y);//x is the smallest
    }


    // Loop through  numbers between x and y
    for (int i = x + 1; i < y; i++) {
        // Check if the remainder when dividing by 5 is 2 or 3
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }

    return 0;
}

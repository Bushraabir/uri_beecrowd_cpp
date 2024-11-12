#include <iostream>
using namespace std;

int main() {
    long long numSides;
    long long sideLength;


    cin >> numSides >> sideLength;

    //   perimeter
    long long perimeter = numSides * sideLength;


    cout << perimeter << endl;

    return 0;
}

#include <iostream>
#include <algorithm> // For sorting
using namespace std;

int main() {
    int length1, length2, length3, length4;


    cin >> length1 >> length2 >> length3 >> length4;

    // Store lengths in an array
    int lengths[] = {length1, length2, length3, length4};

    // Sort  array
    sort(lengths, lengths + 4);


    //  a + b > c ->triangle
    if ((lengths[0] + lengths[1] > lengths[2]) ||
        (lengths[1] + lengths[2] > lengths[3]) ||
        (lengths[0] + lengths[2] > lengths[3])) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}

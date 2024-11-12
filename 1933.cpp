#include <iostream>
using namespace std;

int main() {
    int card1, card2;


    cin >> card1 >> card2;

    // Determine the highest card
    int maxCard = max(card1, card2);


    cout << maxCard << endl;

    return 0;
}

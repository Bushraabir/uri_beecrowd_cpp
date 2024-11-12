#include <iostream>
using namespace std;

int main() {
    int values[5];
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;


    for (int i = 0; i < 5; i++) {
        cin >> values[i];

        // Check if the number is even or odd
        if (values[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;

        // Check if the number is positive, negative, or zero
        if (values[i] > 0)
            positiveCount++;
        else if (values[i] < 0)
            negativeCount++;
    }

    // Output
    cout << evenCount << " valor(es) par(es)" << endl;
    cout << oddCount << " valor(es) impar(es)" << endl;
    cout << positiveCount << " valor(es) positivo(s)" << endl;
    cout << negativeCount << " valor(es) negativo(s)" << endl;

    return 0;
}

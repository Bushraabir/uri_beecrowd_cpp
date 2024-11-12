#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of test cases

    // Loop through each test case
    for (int i = 0; i < n; i++) {
        string player1, player2, choice1, choice2;  // Variables to store player names and their choices
        int num1, num2;  // Variables to store the numbers chosen by the players


        cin >> player1 >> choice1 >> player2 >> choice2;


        cin >> num1 >> num2;


        int sum = num1 + num2;

        // Determine the winner based on the sum
        if (sum % 2 == 0) {  //IF EVEN
            if (choice1 == "PAR") {
                cout << player1 << endl;  // Player 1 wins if they chose PAR
            } else {
                cout << player2 << endl;  // Player 2 wins if they chose IMPAR
            }
        } else {  // The sum is odd
            if (choice1 == "IMPAR") {
                cout << player1 << endl;  // Player 1 wins if they chose IMPAR
            } else {
                cout << player2 << endl;  // Player 2 wins if they chose PAR
            }
        }
    }

    return 0;
}

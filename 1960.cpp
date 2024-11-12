#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    cin >> number;

    // Vectors to map numbers to their corresponding Roman numeral strings
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string romanNumeral = ""; // Resulting Roman numeral string

    // Convert the number to Roman numeral format
    for (size_t i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            number -= values[i];
            romanNumeral += numerals[i];
        }
    }


    cout << romanNumeral << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;


    while (getline(cin, line)) {
        bool upper = true; // Start with uppercase letters
        string result = "";

        for (char ch : line) {
            if (isalpha(ch)) { // Check if the character is a letter
                if (upper) {
                    result += toupper(ch); // Convert to uppercase
                } else {
                    result += tolower(ch); // Convert to lowercase
                }
                upper = !upper; // Toggle the case
            } else {
                result += ch; // Keep non-letter characters (e.g., spaces) as is
            }
        }

        cout << result << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    // Read input until end of file (EOF)
    while (getline(cin, line)) {
        string result = ""; // Final output string
        bool italic = false; // To track if italic tags are open
        bool bold = false;   // To track if bold tags are open

        for (char ch : line) {
            if (ch == '_') {
                // Toggle italic mode and add appropriate tags
                if (italic) {
                    result += "</i>";
                } else {
                    result += "<i>";
                }
                italic = !italic; // Toggle italic state
            } else if (ch == '*') {
                // Toggle bold mode and add appropriate tags
                if (bold) {
                    result += "</b>";
                } else {
                    result += "<b>";
                }
                bold = !bold; // Toggle bold state
            } else {
                // Add regular characters to the result
                result += ch;
            }
        }

        // Print the transformed result
        cout << result << endl;
    }

    return 0;
}

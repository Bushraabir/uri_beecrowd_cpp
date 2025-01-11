#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; // Number of test cases
    cin >> n;
    cin.ignore(); // Ignore the newline after the integer input

    while (n--) {
        string str1, str2, result = "";
        cin >> str1 >> str2;

        int len1 = str1.size();
        int len2 = str2.size();
        int minLength = min(len1, len2);

        // Combine the two strings by alternating letters
        for (int i = 0; i < minLength; ++i) {
            result += str1[i]; // Add a letter from the first string
            result += str2[i]; // Add a letter from the second string
        }

        // Append the remaining part of the longer string
        if (len1 > len2) {
            result += str1.substr(minLength); // Append remaining letters of str1
        } else if (len2 > len1) {
            result += str2.substr(minLength); // Append remaining letters of str2
        }

        // Print the combined result
        cout << result << endl;
    }

    return 0;
}

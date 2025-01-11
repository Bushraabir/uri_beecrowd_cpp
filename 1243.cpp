
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

// Function to check if a word is valid (contains only letters and ends optionally with a period)
bool isValidWord(const string& word) {
    int n = word.size();
    if (n == 0) return false;

    // Check if the word ends with a period and validate the preceding characters
    if (word[n - 1] == '.') {
        for (int i = 0; i < n - 1; ++i) {
            if (!isalpha(word[i])) {
                return false;
            }
        }
    } else {
        // Word does not end with a period, validate all characters
        for (char ch : word) {
            if (!isalpha(ch)) {
                return false;
            }
        }
    }

    return true; // If all checks pass, it's a valid word
}

int main() {
    string line;

    // Read input until end of file (EOF)
    while (getline(cin, line)) {
        stringstream ss(line);
        string word;
        int totalLength = 0; // Sum of the lengths of valid words
        int wordCount = 0;   // Count of valid words

        // Process each word in the line
        while (ss >> word) {
            if (isValidWord(word)) {
                // Calculate word length without considering the period
                int length = word.back() == '.' ? word.size() - 1 : word.size();
                totalLength += length; // Add the length of the valid word
                wordCount++;           // Increment the word count
            }
        }

        // Calculate the average word length
        int averageLength = (wordCount == 0) ? 0 : (totalLength / wordCount);

        // Determine difficulty classification
        int difficulty;
        if (averageLength <= 3) {
            difficulty = 250;
        } else if (averageLength <= 5) {
            difficulty = 500;
        } else {
            difficulty = 1000;
        }

        // Print the result
        cout << difficulty << endl;
    }

    return 0;
}

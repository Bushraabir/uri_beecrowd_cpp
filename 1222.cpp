#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

// Function to calculate the minimum number of pages required
int calculatePages(const vector<string>& words, int maxCharsPerLine, int maxLinesPerPage) {
    int linesUsed = 1;
    int charsOnCurrentLine = 0;
    int pages = 1;
    for (const string& word : words) {
        int wordLength = word.size();

        // If the current line cannot accommodate the new word
        if (charsOnCurrentLine + wordLength + (charsOnCurrentLine > 0 ? 1 : 0) > maxCharsPerLine) {
            linesUsed++;
            charsOnCurrentLine = wordLength;
        } else {
            // Add the word to the current line
            if (charsOnCurrentLine > 0) {
                charsOnCurrentLine++;
            }
            charsOnCurrentLine += wordLength;
        }

        // If lines used exceed the maximum allowed lines per page
        if (linesUsed > maxLinesPerPage) {
            pages++;
            charsOnCurrentLine = wordLength;
        }
    }

    return pages;
}

int main() {
    int n, l, c;
    while (cin >> n >> l >> c) {
        cin.ignore(); // Ignore the newline
        string line;
        getline(cin, line); // Get the full line of text containing the words

        // Parse the input line into individual words
        vector<string> words;
        stringstream ss(line);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        // Calculate the minimum number of pages required
        int pages = calculatePages(words, c, l);

        // Output
        cout << pages << endl;
    }

    return 0;
}

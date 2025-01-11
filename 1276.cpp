#include <iostream>
#include <sstream>
#include <set>
#include <vector>

using namespace std;

string createRange(const vector<char>& range) {
    if (range.size() == 1) {
        return string(1, range[0]) + ":" + range[0];
    } else {
        return string(1, range[0]) + ":" + range[range.size() - 1];
    }
}

int main() {
    string line;

    while (getline(cin, line)) {
        // Handle empty string case
        if (line.empty()) {
            cout << endl;
            continue;
        }

        // Step 1: Collect unique letters
        set<char> uniqueLetters;
        for (char ch : line) {
            if (ch != ' ') {
                uniqueLetters.insert(ch);
            }
        }

        // Step 2: Convert the set to a sorted vector
        vector<char> letters(uniqueLetters.begin(), uniqueLetters.end());

        // Step 3: Find consecutive ranges
        vector<string> ranges;
        vector<char> currentRange;

        for (int i = 0; i < letters.size(); ++i) {
            if (currentRange.empty()) {
                currentRange.push_back(letters[i]);
            } else {
                // Check if the current letter is consecutive
                if (letters[i] == currentRange.back() + 1) {
                    currentRange.push_back(letters[i]);
                } else {
                    // Finalize the current range
                    ranges.push_back(createRange(currentRange));
                    currentRange.clear();
                    currentRange.push_back(letters[i]);
                }
            }
        }

        // Don't forget to add the last range
        if (!currentRange.empty()) {
            ranges.push_back(createRange(currentRange));
        }

        // Step 4: Output all ranges, separated by commas
        for (size_t i = 0; i < ranges.size(); ++i) {
            if (i > 0) cout << ", ";
            cout << ranges[i];
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;


int recognizeNumber(const string& word) {
    unordered_map<string, int> wordsToNumbers = {
        {"one", 1},
        {"two", 2},
        {"three", 3}
    };


    if (wordsToNumbers.find(word) != wordsToNumbers.end()) {
        return wordsToNumbers[word];
    }


    for (int i = 0; i < word.size(); i++) {
        string tempWord = word;

        for (char c = 'a'; c <= 'z'; c++) {
            if (tempWord[i] != c) {
                tempWord[i] = c;
                if (wordsToNumbers.find(tempWord) != wordsToNumbers.end()) {
                    return wordsToNumbers[tempWord];
                }
                tempWord[i] = word[i];
            }
        }
    }


    return -1;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        int result = recognizeNumber(word);
        if (result == -1) {
            cout << "error" << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}


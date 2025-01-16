
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int countAlliterations(const std::string &line) {
    std::vector<std::string> words;
    std::string word;
    int alliterationCount = 0;


    for (char c : line) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    for (size_t i = 1; i < words.size(); i++) {
        std::string word1 = words[i - 1];
        std::string word2 = words[i];


        for (char &c : word1) {
            c = tolower(c);
        }
        for (char &c : word2) {
            c = tolower(c);
        }


        if (word1[0] == word2[0]) {
            alliterationCount++;
        }
    }

    return alliterationCount;
}

int main() {
    std::string line;

    while (std::getline(std::cin, line)) {
        int result = countAlliterations(line);
        std::cout << result << std::endl;
    }

    return 0;
}

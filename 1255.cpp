#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

std::string mostFrequentLetters(const std::string &line) {
    std::unordered_map<char, int> frequencyMap;

    for (char c : line) {
        if (isalpha(c)) {
            c = tolower(c);
            frequencyMap[c]++;
        }
    }

    int maxFrequency = 0;
    std::vector<char> mostFrequent;

    for (auto &entry : frequencyMap) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            mostFrequent = {entry.first};
        } else if (entry.second == maxFrequency) {
            mostFrequent.push_back(entry.first);
        }
    }

    std::sort(mostFrequent.begin(), mostFrequent.end());
    std::string result = "";
    for (char c : mostFrequent) {
        result += c;
    }

    return result;
}

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(); // Ignore the newline after N

    for (int i = 0; i < N; i++) {
        std::string text;
        std::getline(std::cin, text);

        std::string result = mostFrequentLetters(text);
        std::cout << result << std::endl;
    }

    return 0;
}

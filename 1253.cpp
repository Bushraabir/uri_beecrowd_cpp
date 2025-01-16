#include <iostream>
#include <string>

std::string decodeCaesarCipher(const std::string &encodedText, int shift) {
    std::string decodedText = "";
    int n = encodedText.size();

    for (int i = 0; i < n; i++) {
        char currentChar = encodedText[i];
        char decodedChar = ((currentChar - 'A' - shift + 26) % 26) + 'A';
        decodedText += decodedChar;
    }

    return decodedText;
}

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();

    for (int i = 0; i < N; i++) {
        std::string encodedText;
        int shift;

        std::getline(std::cin, encodedText);
        std::cin >> shift;
        std::cin.ignore();

        std::string decodedText = decodeCaesarCipher(encodedText, shift);
        std::cout << decodedText << std::endl;
    }

    return 0;
}


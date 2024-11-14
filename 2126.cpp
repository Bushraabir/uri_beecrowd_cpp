#include <iostream>
#include <string>

int main() {
    std::string N1, N2;
    int caseNumber = 1;


    while (std::cin >> N1 >> N2) {
        int count = 0;
        size_t lastPosition = std::string::npos;

        size_t position = N2.find(N1);
        while (position != std::string::npos) {
            count++;
            lastPosition = position;
            position = N2.find(N1, position + 1);
        }


        std::cout << "Caso #" << caseNumber++ << ":\n";
        if (count > 0) {
            std::cout << "Qtd.Subsequencias: " << count << "\n";
            std::cout << "Pos: " << lastPosition + 1 << "\n";
        } else {
            std::cout << "Nao existe subsequencia\n";
        }
        std::cout << "\n";
    }

    return 0;
}


#include <iostream>

int main() {
    int totaldays;


    std::cin >> totaldays;

    int years = totaldays / 365;//years
    totaldays %= 365;
    int months = totaldays / 30;//months
    int days = totaldays % 30;//days


    std::cout << years << " ano(s)" << std::endl;
    std::cout << months << " mes(es)" << std::endl;
    std::cout << days << " dia(s)" << std::endl;

    return 0;
}

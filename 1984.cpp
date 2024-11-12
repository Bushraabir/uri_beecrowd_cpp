#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::string number;


    std::cin >> number;

    // Reverse the string
    std::reverse(number.begin(), number.end());


    std::cout << number << std::endl;

    return 0;
}

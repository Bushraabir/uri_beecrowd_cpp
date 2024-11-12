#include <iostream>
#include <iomanip>

int main() {
    int age;
    int sum = 0, count = 0;

    // input, if negative stop
    while (std::cin >> age && age >= 0) {
        sum += age;
        count++;
    }

    // Calculate and print the average
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        std::cout << std::fixed << std::setprecision(2) << average << std::endl;
    }

    return 0;
}

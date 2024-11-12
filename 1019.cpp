
#include <iostream> // For input and output

int main() {
    int N;

    // Reading the input value (duration in seconds)
    std::cin >> N;

    // Calculating hours, minutes, and remaining seconds
    int hours = N / 3600;
    N %= 3600;
    int minutes = N / 60;
    int seconds = N % 60;

    // Printing the result in the format "hours:minutes:seconds"
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}

#include <iostream> // For input and output

int main() {
    int distance;


    std::cin >> distance;//input

    // Each kilometer difference between the two cars corresponds to 2 minutes
    // because car Y travels 30 km further in an hour (or 60 minutes).
    // Thus, the time in minutes for car Y to cover 'distance' km more than car X is:
    int time = distance * 2;

    // Printing the result in the format "time minutos"
    std::cout << time << " minutos" << std::endl;

    return 0;
}

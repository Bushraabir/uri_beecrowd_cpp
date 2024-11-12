
#include <iostream> // For input and output
#include <iomanip>  // For setting precision

int main() {
    int time, averageSpeed;

    // Reading input values: time in hours and average speed in km/h
    std::cin >> time >> averageSpeed;

    // The car's fuel consumption rate is 12 km/L.
    const double fuelConsumptionRate = 12.0;

    // Calculating the distance traveled (distance = time * average speed)
    double distance = time * averageSpeed;

    // Calculating the fuel spent (fuel = distance / fuel consumption rate)
    double fuelSpent = distance / fuelConsumptionRate;

    // Printing the result with three decimal places
    std::cout << std::fixed << std::setprecision(3) << fuelSpent << std::endl;

    return 0;
}

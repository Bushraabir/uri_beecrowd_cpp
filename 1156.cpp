#include <iostream>
#include <iomanip>
#include<cmath>

int main() {
    double S = 1.0;
    int numerator = 1;
    int denominator = 1;

    // Loop to calculate sum
    for(int i=1;i<=19;i++){


        S=S+((2*i+1)/pow(2,i));

    }
    // Output
    std::cout << std::fixed << std::setprecision(2) << S << std::endl;

    return 0;
}

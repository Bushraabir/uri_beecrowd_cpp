#include <iostream>
#include <cmath>

int main() {
    int A, B, C;

    while (std::cin >> A >> B >> C && (A != 0 || B != 0 || C != 0)) {
        int house_area = A * B;
        double min_land_area = (house_area * 100.0) / C;
        int land_side = static_cast<int>(std::sqrt(min_land_area));

        std::cout << land_side << std::endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double V, D;
    const double PI = 3.14;

    while (cin >> V >> D) {
        double radius = D / 2.0;

        // Calculate the height of the cylinder
        double height = V / (PI * radius * radius);

        // Calculate the area of the entrance
        double area = PI * radius * radius;

        // Output the results with two decimal places
        cout << fixed << setprecision(2);
        cout << "ALTURA = " << height << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, speed, radius1, radius2, distance, adjusted_distance, distance_between_centers;

    while (cin >> x1 >> y1 >> x2 >> y2 >> speed >> radius1 >> radius2) {

        double deltaX = (x2 - x1) * (x2 - x1);
        double deltaY = (y2 - y1) * (y2 - y1);


        distance = sqrt(deltaX + deltaY);


        adjusted_distance = distance + (speed * 1.50);


        distance_between_centers = radius1 + radius2;


        if (adjusted_distance <= distance_between_centers) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }

    return 0;
}

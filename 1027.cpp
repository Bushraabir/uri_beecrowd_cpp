#include <iostream>
#include <algorithm>
#include <utility>
#define MAX_POINTS 1010

using namespace std;

int topWave[MAX_POINTS];     //  to store the longest wave sequence ending on top level
int bottomWave[MAX_POINTS];  //  to store the longest wave sequence ending on bottom level
pair<int, int> points[MAX_POINTS];  //  to store x, y coordinates of points

int main() {
    int numPoints, x, y;

    // Process each test case
    while (cin >> numPoints) {
        // Read all points
        for (int i = 0; i < numPoints; i++) {
            cin >> x >> y;
            points[i] = make_pair(x, y);
        }

        // Sort points by x-coordinate, and by y-coordinate
        sort(points, points + numPoints);

        // Initialize the wave sequences for the first point
        topWave[0] = 1;
        bottomWave[0] = 1;

        // Process each point to calculate the longest wave sequence
        for (int i = 1; i < numPoints; i++) {
            int maxTopWave = 1;
            int maxBottomWave = 1;

            for (int j = 0; j < i; j++) {

                if (points[i].first > points[j].first && points[i].second == points[j].second + 2)
                    maxTopWave = max(maxTopWave, bottomWave[j] + 1);


                if (points[i].first > points[j].first && points[i].second == points[j].second - 2)
                    maxBottomWave = max(maxBottomWave, topWave[j] + 1);
            }
            // Update the longest wave sequence
            topWave[i] = maxTopWave;
            bottomWave[i] = maxBottomWave;
        }

        //   maximum length of wave sequence
        int maxWaveLength = 1;
        for (int i = 0; i < numPoints; i++) {
            maxWaveLength = max(maxWaveLength, topWave[i]);
            maxWaveLength = max(maxWaveLength, bottomWave[i]);
        }

        // Output
        cout << maxWaveLength << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // To ignore the newline after reading N

    while (N--) {
        string diet, breakfast, lunch;
        getline(cin, diet);
        getline(cin, breakfast);
        getline(cin, lunch);

        // Frequency maps to count the occurrence of each food
        map<char, int> dietCount, breakfastCount, lunchCount;

        // Count the occurrences of each food in the diet, breakfast, and lunch
        for (char food : diet) {
            dietCount[food]++;
        }
        for (char food : breakfast) {
            breakfastCount[food]++;
        }
        for (char food : lunch) {
            lunchCount[food]++;
        }

        bool cheater = false;
        // Check if any food in breakfast or lunch is outside the diet plan
        for (const auto& entry : breakfastCount) {
            if (dietCount.find(entry.first) == dietCount.end() || entry.second > dietCount[entry.first]) {
                cheater = true;
                break;
            }
        }

        for (const auto& entry : lunchCount) {
            if (dietCount.find(entry.first) == dietCount.end() || entry.second > dietCount[entry.first]) {
                cheater = true;
                break;
            }
        }

        if (cheater) {
            cout << "CHEATER" << endl;
        } else {
            // Calculate remaining food to eat during dinner
            string remainingFood = "";
            for (const auto& entry : dietCount) {
                char food = entry.first;
                int available = entry.second;
                int eaten = breakfastCount[food] + lunchCount[food];
                int remaining = available - eaten;

                if (remaining > 0) {
                    remainingFood.append(remaining, food);
                }
            }

            // Sort remaining food and print
            sort(remainingFood.begin(), remainingFood.end());
            cout << remainingFood << endl;
        }
    }

    return 0;
}


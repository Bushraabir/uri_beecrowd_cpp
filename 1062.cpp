#include <iostream>
#include <stack>
#include <vector>

int main() {
    int n;
    while (std::cin >> n && n != 0) {

        while (true) {
            std::vector<int> target(n);
            std::cin >> target[0];

            // Break if 0
            if (target[0] == 0) {
                std::cout << "\n";
                break;
            }


            for (int i = 1; i < n; ++i) {
                std::cin >> target[i];
            }

            std::stack<int> station; // Stack to simulate the station track
            int current = 1;
            bool possible = true;    // Flag to track if the reordering is possible

            // reorder trains
            for (int i = 0; i < n; ++i) {
                // Push trains onto the stack
                while (current <= n && (station.empty() || station.top() != target[i])) {
                    station.push(current++);
                }

                // Check if  top matches target value
                if (station.top() == target[i]) {
                    station.pop(); // Pop if matched
                } else {
                    possible = false; // Set to false if the sequence cannot be achieved
                    break;
                }
            }

            // Output
            if (possible) {
                std::cout << "Yes\n";
            } else {
                std::cout << "No\n";
            }
        }
    }

    return 0;
}

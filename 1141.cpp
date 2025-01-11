#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;

// Function to check if string a can grow into string b
bool canGrow(const string& a, const string& b) {
    if (b.size() == a.size() + 1 && b.substr(0, a.size()) == a) {
        return true;
    }
    return false;
}

// Function to find the largest sequence of growing strings using a graph
int findLargestSequence(vector<string>& strings) {
    int n = strings.size();

    // Sort the strings by length to make processing more efficient
    sort(strings.begin(), strings.end(), [](const string& a, const string& b) {
        return a.size() < b.size();
    });

    // Build a graph where an edge exists if strings[i] can grow into strings[j]
    vector<vector<int>> graph(n);
    vector<int> inDegree(n, 0); // Keeps track of the in-degrees for topological sorting

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (canGrow(strings[i], strings[j])) {
                graph[i].push_back(j);
                inDegree[j]++;
            }
        }
    }

    // Perform a topological sort using Kahn's algorithm
    queue<int> q;
    vector<int> dp(n, 1); // DP array to track the longest path ending at each node

    // Start with nodes with zero in-degree
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    int maxLength = 1; // Track the longest sequence length

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // Process all neighbors of the current node
        for (int neighbor : graph[current]) {
            // Update the DP value for the neighbor
            dp[neighbor] = max(dp[neighbor], dp[current] + 1);
            maxLength = max(maxLength, dp[neighbor]);

            // Decrease the in-degree of the neighbor
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return maxLength;
}

int main() {
    while (true) {
        int n; // Number of strings
        cin >> n;
        if (n == 0) break; // Exit condition

        vector<string> strings(n);

        // Input strings
        for (int i = 0; i < n; ++i) {
            cin >> strings[i];
        }

        // Find and print the largest sequence
        cout << findLargestSequence(strings) << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the longest common substring length
int longestCommonSubstring(const string& str1, const string& str2) {
    int maxLength = 0; // Variable to store the maximum length of common substring
    int len1 = str1.size();
    int len2 = str2.size();

    // A 2D table to store lengths of common substrings
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));

    // Build the table in a bottom-up manner
    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; // Increment length of substring
                maxLength = max(maxLength, dp[i][j]); // Update max length
            }
        }
    }

    return maxLength;
}

int main() {
    string str1, str2;

    // Process each pair of strings until EOF
    while (getline(cin, str1) && getline(cin, str2)) {
        // Find and print the length of the longest common substring
        cout << longestCommonSubstring(str1, str2) << endl;
    }

    return 0;
}

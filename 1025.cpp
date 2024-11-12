#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int caseNumber = 1;

    while (true)
    {
        int N, Q;
        std::cin >> N >> Q;

        // Terminate on the test case where N and Q are both zero
        if (N == 0 && Q == 0) break;

        // Read marbles
        std::vector<int> marbles(N);
        for (int i = 0; i < N; i++)
        {
            std::cin >> marbles[i];
        }

        // Sort the marbles
        std::sort(marbles.begin(), marbles.end());

        std::cout << "CASE# " << caseNumber << ":\n";

        // Process each query
        for (int i = 0; i < Q; i++)
        {
            int query;
            std::cin >> query;

            // Binary search for the query in the sorted marbles
            auto it = std::lower_bound(marbles.begin(), marbles.end(), query);

            if (it != marbles.end() && *it == query)
            {
                // Found, output the 1-based position
                std::cout << query << " found at " << (it - marbles.begin() + 1) << "\n";
            }
            else
            {
                // Not found
                std::cout << query << " not found\n";
            }
        }

        // Increment case number for the next test case
        caseNumber++;
    }

    return 0;
}

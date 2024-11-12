#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to count occurrences of digit d in numbers from 0 to n
ll digits_count(ll n, int d) {
    ll res = 0, pot = 1, rem = 0;
    while (n) {
        int x = n % 10; // Current digit
        n /= 10;        // Reduce the number

        if (x > d) res += (n + 1) * pot;
        else if (x == d) res += n * pot + rem + 1;
        else res += n * pot;

        if (d == 0) res -= pot; // Adjust for leading zeros

        rem += pot * x;
        pot *= 10;
    }
    return res;
}

int main() {
    int a, b;
    while (cin >> a >> b && (a || b)) {
        if (a > b) swap(a, b); // Ensure a <= b

        for (int i = 0; i < 10; i++) {
            if (i > 0) cout << " ";
            cout << digits_count(b, i) - digits_count(a - 1, i);
        }
        cout << endl;
    }
    return 0;
}

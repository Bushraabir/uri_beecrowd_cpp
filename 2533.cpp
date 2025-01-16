#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;

    while(cin >> T){
        int totala = 0, totalb = 0;
        for(int i = 0, n, c; i < T; i++){
            cin >> n >> c;
            totala += (n * c);
            totalb += c;
        }

        cout << fixed << setprecision(4) << totala / (totalb * 100.0) << endl;
    }

    return 0;
}

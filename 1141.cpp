#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Disable synchronization with C-style
    int N;


    while (cin >> N && N) {
        set<string> seq; //   store unique strings in sorted order
        string a, b;


        for (int i = 0; i < N; i++) {
            cin >> b;


            if (a.find(b) + 1) { //  if  substring
                seq.insert(a);
            }

            a.swap(b);
        }

        cout << seq.size() << endl; // Output the number of unique strings in the set
    }

    return 0;
}

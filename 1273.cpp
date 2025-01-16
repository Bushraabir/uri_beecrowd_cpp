
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words;
    int t, maxLength = 0;
    int flag = 0;

    while (true) {
        cin >> t;
        if (t == 0)
            break;

        if (flag == 1)
            cout << endl;

        maxLength = 0;
        words.resize(t);

        for (int j = 0; j < t; j++) {
            cin >> words[j];
            maxLength = max(maxLength, (int)words[j].length());
        }

        for (int i = 0; i < t; i++) {
            int wordLength = words[i].length();
            for (int v = wordLength; v < maxLength; v++)
                cout << " ";
            cout << words[i] << endl;
        }

        flag = 1;
    }

    return 0;
}

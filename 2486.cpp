#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    unordered_map<string, int> vitaminCContent = {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34}
    };

    while (true) {
        int T;
        cin >> T;
        if (T == 0) break;

        int totalVitaminC = 0;


        for (int i = 0; i < T; ++i) {
            int N;
            string food;
            cin >> N >> ws;
            getline(cin, food);


            totalVitaminC += N * vitaminCContent[food];
        }


        if (totalVitaminC < 110) {
            cout << "Mais " << 110 - totalVitaminC << " mg" << endl;
        } else if (totalVitaminC > 130) {
            cout << "Menos " << totalVitaminC - 130 << " mg" << endl;
        } else {
            cout << totalVitaminC << " mg" << endl;
        }
    }

    return 0;
}


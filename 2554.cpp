#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int N, D;

    while (cin >> N >> D) {
        cin.ignore();  // Ignore the newline after the integers
        string result = "Pizza antes de FdI";

        for (int i = 0; i < D; i++) {
            string line;
            getline(cin, line);

            stringstream ss(line);
            string date;
            ss >> date;

            bool all_can_attend = true;
            for (int j = 0; j < N; j++) {
                int attendance;
                ss >> attendance;
                if (attendance == 0) {
                    all_can_attend = false;
                }
            }

            if (all_can_attend && result == "Pizza antes de FdI") {
                result = date;
            }
        }

        cout << result << endl;
    }

    return 0;
}

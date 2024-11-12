#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total = 0;
    int rabbits = 0, rats = 0, frogs = 0;

    for (int i = 0; i < N; i++) {
        int amount;
        char type;
        cin >> amount >> type;

        total += amount;

        // Count animals based on type
        if (type == 'C') {
            rabbits += amount;
        } else if (type == 'R') {
            rats += amount;
        } else if (type == 'S') {
            frogs += amount;
        }
    }

    // Calculate percentages
    double percentRabbits = (rabbits * 100.0) / total;
    double percentRats = (rats * 100.0) / total;
    double percentFrogs = (frogs * 100.0) / total;

    // Output
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbits << endl;
    cout << "Total de ratos: " << rats << endl;
    cout << "Total de sapos: " << frogs << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentRabbits << " %" << endl;
    cout << "Percentual de ratos: " << percentRats << " %" << endl;
    cout << "Percentual de sapos: " << percentFrogs << " %" << endl;

    return 0;
}

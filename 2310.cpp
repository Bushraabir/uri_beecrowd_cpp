#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total_services = 0, total_blocks = 0, total_attacks = 0;
    int successful_services = 0, successful_blocks = 0, successful_attacks = 0;

    for (int i = 0; i < N; ++i) {
        string name;
        cin >> name;

        int S, B, A;
        int S1, B1, A1;
        cin >> S >> B >> A;
        cin >> S1 >> B1 >> A1;


        total_services += S;
        total_blocks += B;
        total_attacks += A;

        successful_services += S1;
        successful_blocks += B1;
        successful_attacks += A1;
    }


    if (total_services == 0) {
        cout << "Pontos de Saque: 0.00 %." << endl;
    } else {
        double service_percentage = (double(successful_services) / total_services) * 100;
        cout << fixed << setprecision(2) << "Pontos de Saque: " << service_percentage << " %." << endl;
    }

    if (total_blocks == 0) {
        cout << "Pontos de Bloqueio: 0.00 %." << endl;
    } else {
        double block_percentage = (double(successful_blocks) / total_blocks) * 100;
        cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << block_percentage << " %." << endl;
    }

    if (total_attacks == 0) {
        cout << "Pontos de Ataque: 0.00 %." << endl;
    } else {
        double attack_percentage = (double(successful_attacks) / total_attacks) * 100;
        cout << fixed << setprecision(2) << "Pontos de Ataque: " << attack_percentage << " %." << endl;
    }

    return 0;
}


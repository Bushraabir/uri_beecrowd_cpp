#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    // Map to store the winning cases
    unordered_map<string, string> wins;
    wins["tesoura"] = "papel lagarto";
    wins["papel"] = "pedra Spock";
    wins["pedra"] = "lagarto tesoura";
    wins["lagarto"] = "Spock papel";
    wins["Spock"] = "tesoura pedra";

    for (int i = 1; i <= T; i++) {
        string sheldon, raj;
        cin >> sheldon >> raj;

        if (sheldon == raj) {
            cout << "Caso #" << i << ": De novo!" << endl;
        } else if (wins[sheldon].find(raj) != string::npos) {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }

    return 0;
}

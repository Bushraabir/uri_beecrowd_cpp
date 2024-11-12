#include <iostream>
using namespace std;

int main() {
    int password;

    while (true) {

        cin >> password;

        // Check if the entered password is  correct or not
        if (password == 2002) {
            cout << "Acesso Permitido" << endl;
            break; // if passward matches
        } else {
            cout << "Senha Invalida" << endl; // if passward does not match
        }
    }

    return 0;
}

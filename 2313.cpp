#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;


    if (A + B <= C || A + C <= B || B + C <= A) {
        cout << "Invalido" << endl;
    } else {

        if (A == B && B == C) {
            cout << "Valido-Equilatero" << endl;
        } else if (A == B || B == C || A == C) {
            cout << "Valido-Isoceles" << endl;
        } else {
            cout << "Valido-Escaleno" << endl;
        }


        int a = A, b = B, c = C;


        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        if (a > b) swap(a, b);


        if (a * a + b * b == c * c) {
            cout << "Retangulo: S" << endl;
        } else {
            cout << "Retangulo: N" << endl;
        }
    }

    return 0;
}


#include <iostream>
#include <map>
using namespace std;

int main() {
    // Initialize the map with DDD codes and corresponding city names
    map<int, string> dddMap = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };

    int ddd;
    cin >> ddd;

    // Check if the DDD exists in the map
    if (dddMap.find(ddd) != dddMap.end()) {
        cout << dddMap[ddd] << endl;
    } else {
        cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}

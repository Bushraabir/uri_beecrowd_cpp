#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    cout << quote.substr(0, N) << endl;

    return 0;
}

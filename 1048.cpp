#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, newSalary, increase;
    int percentage;

    cin >> salary;

    //increase percentage based on the salary range
    if (salary <= 400.00) {
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    //increase amount and  new salary
    increase = salary * percentage / 100.0;
    newSalary = salary + increase;

    // Output
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << newSalary << endl;
    cout << "Reajuste ganho: " << increase << endl;
    cout << "Em percentual: " << percentage << " %" << endl;

    return 0;
}

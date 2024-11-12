
#include <iostream>

int factorial(int n) {//function to find factorial
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int N;
    std::cin >> N;

    //output
    std::cout << factorial(N) << std::endl;

    return 0;
}

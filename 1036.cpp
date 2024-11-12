#include <iostream>
#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C;

    std::cin >> A >> B >> C;//input

    if((pow(B,2) - 4*A*C) < 0 || 2*A == 0)//root exists or not
                 std::cout << "Impossivel calcular\n";
    else{
        //apply formula and print
         printf("R1 = %.5lf\n",((-B) + sqrt((pow(B,2) - 4*A*C)))/(2*A));
         printf("R2 = %.5lf\n",((-B) - sqrt((pow(B,2) - 4*A*C)))/(2*A));
         }
    return 0;
}

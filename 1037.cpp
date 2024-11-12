#include <iostream>



int main(){

    float a;

    std::cin >> a;//input

    if(a < 0.0000)
         std::cout << "Fora de intervalo\n";//print if the number is negative
    else if(a >= 0.0000 && a <= 25.0000)
         std::cout << "Intervalo [0,25]\n";//print is the  the number belongs: [0,25]
    else if(a > 25.0000 && a <=50.0000)
         std::cout << "Intervalo (25,50]\n";//print is the  the number belongs: (25,50]
    else if(a > 50.0000 && a <=75.0000)
         std::cout << "Intervalo (50,75]\n";//print is the  the number belongs: (50,75]
    else if(a > 75.0000 && a <=100.0000)
         std::cout << "Intervalo (75,100]\n";//print is the  the number belongs: (75,100]
    else if(a > 100.0000)
         std::cout << "Fora de intervalo\n";//print is the  the number is out of interval

    return 0;
}

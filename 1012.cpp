#include<iostream>
#include <iomanip>// For std::fixed and std::setprecision
#define pi 3.14159


int main ()
{

    float A,B,C;
    std::cin>>A>>B>>C;//input

    std::cout<<"TRIANGULO: "<<std::fixed<<std::setprecision(3)<<.5*A*C<<std::endl;
    //area=1/2*base*height
    std::cout<<"CIRCULO: "<<std::fixed<<std::setprecision(3)<<pi*C*C<<std::endl;
    //are=pi*(radious)^2
    std::cout<<"TRAPEZIO: "<<std::fixed<<std::setprecision(3)<<.5*(A+B)*C<<std::endl;
    //area=1/2*sum of bases*height
    std::cout<<"QUADRADO: "<<std::fixed<<std::setprecision(3)<<B*B<<std::endl;
    //area=(side)^2
    std::cout<<"RETANGULO: "<<std::fixed<<std::setprecision(3)<<A*B<<std::endl;
    //area=length*breadth



    //std::fixed ensures the number is printed in fixed point notation,
    //not scientific notation &
    //std::setprecision() specifies dicimal places for outpt


    return 0;
}


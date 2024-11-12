#include<iostream>
#include <iomanip>// For std::fixed and std::setprecision
#define pi 3.14159


int main ()
{

    float R;
    std::cin>>R;//input

    std::cout<<"VOLUME = "<<std::fixed<<std::setprecision(3)<<4.0/3*pi*R*R*R
    <<std::endl;
    //std::fixed ensures the number is printed in fixed point notation,
    //not scientific notation &
    //std::setprecision() specifies dicimal places for outpt


    return 0;
}

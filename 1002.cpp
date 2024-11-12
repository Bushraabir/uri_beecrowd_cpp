#include<iostream>
#include <iomanip>//for std:: setprecision()

#define pi 3.14159//defining const
int main()
{

    double R;
    std::cin>>R;
    std::cout<<"A="<<std::fixed<<std::setprecision(4)<<pi*R*R<<std::endl;
    //std::fixed ensures the number is printed in fixed point notation,not scientific notation &
    //std::setprecision() specifies dicimal places for outpt
    return 0;
}




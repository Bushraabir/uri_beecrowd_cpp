#include<iostream>
#include <iomanip>// For std::fixed and std::setprecision

int main()
{

    int X;
    float Y;
    std::cin>>X>>Y;
    std::cout<<std::fixed<<std::setprecision(3)<<X/Y<<" km/l"<<std::endl;
    //average consumption=total distance/spent fue
    //std::fixed ensures the number is printed in fixed point notation,not scientific notation &
    //std::setprecision() specifies dicimal places for outpt

    return 0;
}

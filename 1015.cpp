#include<iostream>
#include <iomanip>// For std::fixed and std::setprecision() n
#include<cmath>//for std::sqrt()


int main()
{
    float x1,y1,x2,y2;
    std::cin>>x1>>y1>>x2>>y2;//input
    float a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    std::cout<<std::fixed<<std::setprecision(4)
             <<std::sqrt(a)<<std::endl;
    //distance output
    //std::fixed ensures the number is printed in fixed point notation,not scientific notation &
    //std::setprecision() specifies dicimal places for outpt

    return 0;
}



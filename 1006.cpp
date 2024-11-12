#include<iostream>
#include <iomanip>// For std::fixed and std::setprecision


int main()
{
    float A,B,C;
    std::cin>>A>>B>>C;


    std::cout<<"MEDIA = "<<std::fixed<<std::setprecision(1)<<(A*2+B*3+C*5)/(2+3+5)<<std::endl;
    //std::fixed ensures the number is printed in fixed point notation,not scientific notation &
    //std::setprecision() specifies dicimal places for outpt

    return 0;
}


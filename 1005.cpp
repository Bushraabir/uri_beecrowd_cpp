#include<iostream>
#include <iomanip>//for std:: setprecision()


int main()
{
    float A,B;
    std::cin>>A>>B;


    std::cout<<"MEDIA = "<<std::fixed<<std::setprecision(5)<<(A*3.5+B*7.5)/(3.5+7.5)<<std::endl;
    //std::fixed ensures the number is printed in fixed point notation,not scientific notation &
    //std::setprecision() specifies dicimal places for outpt

    return 0;
}

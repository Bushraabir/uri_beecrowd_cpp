#include<iostream>
#include <iomanip>// For std::fixed and std::setprecision

int main()
{
    std::string employee_name;
    float salary_per_hour,value_sold;

    std::cin>>employee_name;//string input
    std::cin>>salary_per_hour>>value_sold;//float input



    std::cout<<"TOTAL = R$ "<<std::fixed<<std::setprecision(2)
             <<salary_per_hour+value_sold*.15<<std::endl;//total=salary_per_hour+value_sold*15%

    //std::fixed ensures the number is printed in fixed point notation,not scientific notation &
    //std::setprecision() specifies dicimal places for outpt



    return 0;
}


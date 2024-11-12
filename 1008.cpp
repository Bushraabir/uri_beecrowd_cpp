#include<iostream>
#include <iomanip>//for std:: setprecision()

int main()
{

    int employee_number,work_hour;
    float salary_per_hour;

    std::cin>>employee_number>>work_hour>>salary_per_hour;//input


    std::cout<<"NUMBER = "<<employee_number<<std::endl;
    std::cout<<"SALARY = U$ "<<std::fixed<<std::setprecision(2)
             <<work_hour*salary_per_hour<<std::endl;//salary=work_hour*salary_per_hour
    //std::fixed ensures the number is printed in fixed point notation,not scientific notation &
    //std::setprecision() specifies dicimal places for outpt



    return 0;
}

#include<iostream>>


int main()
{

    int A,B,C,D;//input

    std::cin>>A>>B>>C>>D;

    if(B>C && D>A && (C+D)>(A+B) && C>0 && D>0 && A%2==0) //condition
    {


        std::cout<<"Valores aceitos"<<std::endl;//output when condition is satisfied

    }
    else
        std::cout<<"Valores nao aceitos"<<std::endl;//when condition is not satisfied



    return 0;
}

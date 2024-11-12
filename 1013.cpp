#include<iostream>

int main()
{
    int a,b,c;
    std::cin>>a>>b>>c;
    int bigger_between_ab=(a+b+abs(a-b))/2;//comparing a &b
    std::cout<<(bigger_between_ab+c+abs(bigger_between_ab-c))/2
             <<" eh o maior"<<std::endl;
                //comparing with c and then printing the biggest


    return 0;
}

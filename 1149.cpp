#include<iostream>


int main()
{
    int sum=0,a;
    int n;

    std::cin>>a;

    while (true)//checking if n is positive value or not
    {

        std::cin>>n;
        if(n>0) break;
    }

    for(;; a++)//crating sum
    {
        sum=sum+a;
        n--;
        if(n==0)break;

    }
    std::cout<<sum<<std::endl;
    return 0;
}

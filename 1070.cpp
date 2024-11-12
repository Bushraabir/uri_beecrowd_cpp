
#include<iostream>


int main()
{
    int x;
    std::cin>>x;
    if(x%2==0)//checking odd or even
        x++;

    int count=1;

    for(x;; x=x+2)
    {
        std::cout<<x<<std::endl;//printing odd number
        count++;
        if(count==7)//break when 6 odd number is printed
            break;
    }
    return 0;
}

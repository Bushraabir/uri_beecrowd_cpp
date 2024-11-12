#include<iostream>
#include<cmath>


int main()
{
    int n,x,counter=1,sum=0;

    std::cin>>n;
    for(int i=0; i<n; i++) //loop for each test case
    {
        std::cin>>x;
        long long int y=(pow(2,x)/12000);//storing value in long long
        std::cout<<y<<" kg\n";//print required value

    }

    return 0;
}

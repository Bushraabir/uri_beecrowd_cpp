#include<iostream>
#include<cmath>


int main()
{
    int N;
    std::cin>>N;

    for(int i=1; i<=N; i++)//loop number of lines
    {
        std::cout<< i <<" "<<i*i << " " <<i*i*i;//output will be the power
        std::cout<<"\n";
    }
    return 0;
}


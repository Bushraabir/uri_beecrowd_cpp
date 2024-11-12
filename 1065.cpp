#include<iostream>


int main()
{

    int x[5],count=0;

    for(int i=0; i<5; i++)
    {

        std::cin>>x[i];
        if(x[i]%2==0)//increase the value of count  if even
            count++;

    }

    std::cout<<count<<" valores pares\n";
    return 0;
}

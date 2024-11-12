#include<iostream>


int main()
{
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++)
    {

        int x,y,sum=0;
        std::cin>>x>>y;
        if (x<y)
            std::swap(x,y);//x will be the largest;
        if (y%2 ==0)
            y++;//y will be odd;
        else
            y=y+2;

        for(; y<x; y=2+y)//taking range in between x&y
        {
            sum=sum+y;
        }


        std::cout<<sum<<std::endl;

    }


    return 0;
}

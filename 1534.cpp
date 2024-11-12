#include<iostream>

int main()
{
    int n;
    while(std::cin>>n)
    {

        for(int column=1; column<=n; column++)//for column
        {

            for(int row=1; row<=n; row++)//For rows
            {

                if(row+column==n+1) std::cout<<2 ;//secondary diagonal
                else if (row==column) std::cout<<1 ;//principal diagonal
                else    std::cout<<3 ;




            }




            std::cout<<std::endl;
        }
    }





    return 0;
}

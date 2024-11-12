#include<iostream>


int main()
{
    int N,k=1;
    std::cin>>N;

    for(int i=0; i<N; i++)//loop number of lines
    {
        for(int j=0; j<3; j++)//loop for printing 3 numbers
        {
            std::cout<< k <<" ";
            k++;


        }
        std::cout<<"PUM\n";
        k++;//there is a gap in between the numbers



    }



    return 0;
}

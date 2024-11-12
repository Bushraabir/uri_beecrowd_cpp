#include<iostream>


int main()
{
    int j=1;
    for(int i=0;; i++)
    {
        std::cout<<"I="<<(j+2*i)<<" J="<<60-5*i<<std::endl;//general formula of i=j+2*i
                                                           //general formula of j=60-5*i

        if(i*5==60) break;

        j++;

    }



}

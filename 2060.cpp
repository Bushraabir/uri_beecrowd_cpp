#include<iostream>

int main()
{

    int n;
    std::cin>>n;
    int count[6]={0,0,0,0,0,0};//using array for hashing

    while(n>0)
    {
        int a;
        std::cin>>a;

        if(a%2==0)  count[2]++;
         if(a%3==0) count[3]++;
         if(a%4==0) count[4]++;
         if(a%5==0) count[5]++;
        n--;
    }
    std::cout<<count[2]<<" Multiplo(s) de 2\n"
             <<count[3]<<" Multiplo(s) de 3\n"
             <<count[4]<<" Multiplo(s) de 4\n"
             <<count[5]<<" Multiplo(s) de 5\n";
    return 0;
}

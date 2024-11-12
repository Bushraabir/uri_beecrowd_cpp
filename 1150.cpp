#include<iostream>
int main()
{
    int a,b,c=0,x,z;
    std::cin >>x;
    do{
        std::cin >>z;
    }
    while(x>=z);
    for(a=x,b=0; b<z; a++)
    {
        b+=a;
        c++;
    }
    std::cout<<c<<std::endl;
    return 0;
}

#include <iostream>
int main()
{
    int n, c, m;
    int a, b;
    double ac, bc;
    std::cin>>n;
    for(m=1; m<=n; m++)
    {
        c = 0;
        std::cin>>a>>b>>ac>>bc;
        while(a <= b)
        {   //calculation population
            a *= (ac / 100.0) + 1.0;
            b *= (bc / 100.0) + 1.0;
            c++;
            if (c > 100)//check if more thsn 100 years
            {
                std::cout<<"Mais de 1 seculo.\n";
                break;
            }
        }
        if (c <= 100)//check if less than 100 years
           std::cout<<c<<" anos.\n";
    }
    return 0;
}

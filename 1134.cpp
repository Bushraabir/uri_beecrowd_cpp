#include<iostream>

int main()
{
    int x,alcohol=0,gasoline=0,diesel=0;

    for(;;)
    {
        std::cin>>x;
        if(x==1) alcohol++;
        else if (x==2) gasoline++;
        else if (x==3) diesel++;
        else if(x==4) break;


    }

    std::cout<<"MUITO OBRIGADO"<<std::endl;
    std::cout<<"Alcool: "<<alcohol<<std::endl;
    std::cout<<"Gasolina: "<< gasoline <<std::endl;
    std::cout<<"Diesel: "<< diesel <<std::endl;

    return 0;
}

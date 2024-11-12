#include<iostream>


int main(){
    float x[6];
    int pos_value=0;
for(int i=0;i<6;i++)
{
    std::cin>>x[i];//storing valus in array
    if(x[i]>0)
        pos_value++;//counting number of positive values
}

std::cout<<pos_value<<" valores positivos"<<std::endl;
return 0;
}

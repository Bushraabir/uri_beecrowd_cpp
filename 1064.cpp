#include<iostream>
#include<iomanip>


int main(){
    float x[6],sum=0;
    int pos_value=0;
for(int i=0;i<6;i++)
{
    std::cin>>x[i];//storing values in array
    if(x[i]>0){

        pos_value++;//counting number of positive values
        sum=sum+x[i];//sum of positive number

    }
}

std::cout<<pos_value<<" valores positivos"<<std::endl;
std::cout<<std::fixed<<std::setprecision(1)<<sum/pos_value<<std::endl;
return 0;
}


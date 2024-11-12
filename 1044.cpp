#include<iostream>

int main(){
int A,B;
std::cin>>A>>B;

if(B%A==0 || A%B==0){//if they are multiple there will be no remainder after division
    std::cout<<"Sao Multiplos"<<std::endl;
}else
std::cout<<"Nao sao Multiplos"<<std::endl;

return 0;
}

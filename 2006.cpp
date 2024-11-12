#include<iostream>


int main(){

    int type;
    int A[5],count=0;

    std::cin>>type;

    for(int i=0;i<5;i++){

        std::cin>>A[i];

        if(A[i]==type)  count ++;//increase value of count when matches
    }

     std::cout<<count<<std::endl;

return 0;
}

#include<iostream>

int main(){
int x,y;

for(;;){
    std::cin>>x>>y;
    if(x<=0 || y<=0)
        break;

    if (x<y)
            std::swap(x,y);//x will be the largest;
    int sum=0;
    for(;y<=x;y++){
        sum=sum+y;//collecting sum
        std::cout<<y<<" ";
    }
    std::cout<<"Sum="<<sum<<std::endl;
}

return 0;
}

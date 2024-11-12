#include<iostream>



int gcd( int a, int b){//finding gcd

while(b !=0){
    int remainder=a%b;
    a=b;
    b=remainder;


}
return a;

}


int main(){
    int n;       //test case
    std::cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        std::cin>>a>>b;

        std::cout<<gcd(a,b)<<std::endl;


    }
    return 0;

}

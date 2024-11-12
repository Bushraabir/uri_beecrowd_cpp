#include<iostream>
#include <iomanip>

using namespace std;

int main(){
float A,B,C;
cin>>A>>B>>C;
//sorting descending order
if(B>A)
    swap(B,A);
if(C>A)
    swap(C,A);
if(C>B)
    swap(C,B);

//condition for triangle
if((C+B)>A){
    //perimeter of triangle
    cout<<"Perimetro = "<<fixed<<setprecision(1)<<A+B+C<<endl;
}else
    //area of trapezium
    cout<<"Area = "<<fixed<<setprecision(1)<<(A+B)*C*.5<<endl;






return 0;
}

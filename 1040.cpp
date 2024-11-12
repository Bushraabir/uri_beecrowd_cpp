#include<iostream>
#include <iomanip>
using namespace std;

int main(){

float N1,N2,N3,N4;

cin>>N1>>N2>>N3>>N4;

float avg_weight=  (N1*2 +N2*3 +N3*4 +N4*1)/(2+3+4+1);//average weight

cout<<"Media: "<<fixed << setprecision(1)<<avg_weight<<endl;

if(avg_weight>7.0)
    cout<<"Aluno aprovado.\n";//if average weight is greater than 7.0
else if(avg_weight<5.0)
    cout<<"Aluno reprovado.\n";//if average weight is less than 5.0
else{

    cout<<"Aluno em exame.\n";//if average weight is between 7.0 and 5.0
float N5;
cin>>N5;
cout<<fixed << setprecision(1)<<"Nota do exame: "<<N5<<endl;//take new input and print

avg_weight=(avg_weight+N5)/2;//recalculate average weight



 if(avg_weight>5.0){

    cout<<"Aluno aprovado."<<endl;//if average weight is more than 5.0


 }else
    cout<<"Aluno reprovado."<<endl;//if average weight is less than 5.0


cout<<"Media final: "<<fixed << setprecision(1)<<avg_weight<<endl;//print final  average weight

}
return 0;
}

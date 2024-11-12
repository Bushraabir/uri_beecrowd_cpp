#include<iostream>
using namespace std;

int main(){
float x,y;

cin>>x>>y;

if(x==0 && y==0)//condition for origin
    cout << "Origem\n";
else if(x==0 && y!=0)//condition for y axis
    cout << "Eixo Y\n";
else if(x!=0 && y==0)//condition for x axis
    cout << "Eixo X\n";
else if(x>0 && y>0)// condition for 1st quadrant
    cout << "Q1\n";
else if(x<0 && y>0)//condition for 2nd quadrant
    cout << "Q2\n";
else if(x<0 && y<0)//condition for 3rd quadrant
    cout << "Q3\n";
else if(x>0 && y<0)//condition for 4th quadrant
    cout << "Q4\n";


return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,z;
    int sorted[3];//array

    cin >> a >> b >> c;
    sorted[0] = a;
    sorted[1] = b;
    sorted[2] = c;

    //sorting
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(sorted[i] < sorted[j]){
                            z = sorted[j];
                            sorted[j] = sorted[i];
                            sorted[i] = z;
                    }
            }
    }

    cout << sorted[0] << endl << sorted[1] << endl << sorted[2] << endl << endl;
    cout << a << endl << b << endl << c << endl;
    return 0;
}

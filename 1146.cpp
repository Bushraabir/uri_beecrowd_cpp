#include <iostream>

using namespace std;

int main(){

    int n;

    while(true){
                cin >> n;
                if(n == 0) break;//if n=0,end programme
                for(int i = 1; i <= n; i++){
                        cout << i;
                        cout << ((i == n) ? "\n" : " ");//if i=n,print new line or print space
                }
    }
    return 0;
}

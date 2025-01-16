#include <stdio.h>

int main(){
    int p, i, proc, clock;
    char a[51];

    while(scanf("%[^\n]%*c",&a) != EOF){
             scanf("%d%*c",&p);
             proc = clock = 0;
             for(i = 0; a[i] != '\0'; i++){
                   if(a[i] == 'W'){
                              clock++;
                              if(proc > 0){
                                      proc = 0;
                                      clock++;
                              }
                   }
                   else{
                        proc++;
                        if(proc == p){
                                clock++;
                                proc = 0;
                        }
                   }
             }
             if(proc > 0) clock ++;
             printf("%d\n",clock);
    }
    return 0;
}

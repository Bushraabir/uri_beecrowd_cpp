#include <iostream>
#include <string.h>


void reverse(char word[],int len)//function to reverse
{
    char temp;
    for (int i=0;i<len/2;i++)
    {
            std::swap(word[i],word[len-1-i]);
    }
}

int main(){
    int N,i,j,len;
    char M[1001];

    std::cin>>N;
    std::cin.getline(M,0);
    for(i = 0; i < N; i++){
            std::cin.getline(M,1001);

            for(j = 0; M[j] != '\0'; j++)
                  if(M[j] >= 65 && M[j] <= 90 ||  M[j] >= 97 && M[j] <= 122)//with in A-z or a-z
                              M[j] += 3;

            len=strlen(M);
            reverse(M,len);

            for(j = len/2; M[j] != '\0'; j++)
                              M[j]--;

            std::cout<<M<<std::endl;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char S[100];
    int i,j;
    gets(S);
    char min = S[0];
    for(i=2;i<100;)
    {
       if(min>S[i])
       {
           min=S[i];
       }
       i=i+1;
    }
    printf("%c",min);
}

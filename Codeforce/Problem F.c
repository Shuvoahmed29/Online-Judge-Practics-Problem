#include<stdio.h>
int main()
{
    char S[5];
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%c",&S[i]);
        if(S[i]=='+')
            sum=sum+1;
        else
            sum=sum-1;
    }
    printf("%d\n",sum+1);
    return 0;

}

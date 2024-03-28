#include<stdio.h>
int main()
{
    int n;
    char S[50];
    scanf("%d",&n);
    scanf("%s",&S);
    int i,t=0;

    for(i=0;i<n;i++)
    {
        if(S[i]==S[i+1])
        {
            t++;
        }
    }
    printf("%d\n",t);
    return 0;
}

#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    int i,a=1;
    char S[N][11],max[11];
    for(i=0;i<N;i++)
    {
        scanf("%s",&S[i]);
    }
    max=S[0];
    for(i=1;i<N;i++)
    {
        if(max==S[i])
        {
           a=1;
        }
        else
        {

        }
    }
}

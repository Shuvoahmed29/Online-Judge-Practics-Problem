#include<stdio.h>
int main()
{
    int n,one=0,two=0,three=0,four=0;
    scanf("%d",&n);
    int A[n],i,taxi=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)

    {
        if(A[i]==1)
        {
            one++;
        }
        if(A[i]==2)
        {
            two++;
        }
        if(A[i]==3)
        {
            three++;
        }
        if(A[i]==4)
        {
            four++;
        }
    }
    taxi=taxi+four;
    while(one!=0 && three!=0)
    {
        three=three-1;
        one=one-1;
        taxi=taxi+1;
    }
    if(three!=0 && one==0)
    {
        taxi=taxi+three;
        three=0;
    }
    taxi=taxi+two/2;
    if(two%2!=0)
    {
        if(one<=2)
        {
            taxi=taxi+1;
            two=0;
            one=0;
        }
        else
        {
            one=one-2;
            taxi=taxi+1;
            two=0;
        }
    }
    if(one!=0)
    {
        taxi=taxi+one/4;
        if(one%4!=0)
        {
            taxi=taxi+1;
        }
    }
    printf("%d\n",taxi);
    return 0;


}

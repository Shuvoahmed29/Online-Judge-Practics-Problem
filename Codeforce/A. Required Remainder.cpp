#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int t,x,y,n,p,k,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&x,&y,&n);
        p=((n-y)/x);
        k=(p*x)+y;
        printf("%d\n",k);
    }
    return 0;
}


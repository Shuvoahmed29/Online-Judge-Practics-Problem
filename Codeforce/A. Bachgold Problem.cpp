#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,p;
    scanf("%d",&n);
    p=n/2;
    printf("%d\n",p);
    if (n%2==0)
    {
        for(i=0; i<p-1; i++)
        {
            printf("2 ");
        }
        printf("2\n");
    }
    if(n%2==1)
    {
        for (i=0; i<p-1; i++)
        {
            printf("2 ");
        }
        printf("3\n");
    }
    return 0;
}

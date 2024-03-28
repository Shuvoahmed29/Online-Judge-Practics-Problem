#include<stdio.h>
int main()
{
    int k,a,b,w=0,i;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%k==0)
        {
           w=1;
        }
    }
    if(w==1)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
}

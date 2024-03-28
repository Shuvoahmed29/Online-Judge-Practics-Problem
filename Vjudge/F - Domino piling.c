#include<stdio.h>
int main()
{
    int m,n,s,k;
    scanf("%d %d",&m,&n);
    k = m*n;
    if(k%2==0)
    {
        s = k/2;
        printf("%d\n",s);
    }
    else
    {
        s = (k-1)/2;
        printf("%d\n",s);
    }
    return 0;
}


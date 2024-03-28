#include<stdio.h>
int main()
{
    int n,m,p;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        p=m*n*2;
        printf("%d\n",p);
    }
    return 0;
}

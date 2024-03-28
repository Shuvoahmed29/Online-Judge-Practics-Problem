#include<stdio.h>
int npr(int n,int r)
{
    int s=1,i;
    for(i=0;i<=(r-1);i++)
    {
        s=s*(n-i);

    }
    return s;
}
int main()
{
    int n,r,s;
    printf("Enter two value :  ");
    scanf("%d%d",&n,&r);
    s = npr(n,r);

    printf("The NPR value is = %d\n",s);
    return 0;
}

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s;
        scanf("%d %d",&a,&b);
        s=a^b;
        printf("%d\n",s);
    }
    return 0;
}

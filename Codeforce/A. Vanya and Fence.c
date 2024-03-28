#include<stdio.h>
int main()
{
    int n,h,s=0;
    scanf("%d %d",&n,&h);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h)
            s=s+2;
        else
            s=s+1;
    }
    printf("%d\n",s);
    return 0;
}

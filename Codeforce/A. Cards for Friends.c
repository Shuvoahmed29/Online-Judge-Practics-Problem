#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,h,n;
    int r=1,w;
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d",&w,&h,&n);
        while(w%2==0)
        {
            w=w/2;
            r*=2;
        }
        while(h%2==0)
        {
            h=h/2;
            r*=2;
        }
        if(r>=n)
        {
            printf("YES\n");
            r=1;
        }
        else
        {
            printf("NO\n");
            r=1;
        }
    }

    return 0;
}

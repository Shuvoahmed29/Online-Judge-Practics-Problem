#include<stdio.h>
int main()
{
    int n,t=75,i,p,m=0,s,c=1;
    for(;;t--)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&p);
            if(p==0)
                m++;
        }
        s=n-(m*2);
        printf("Case %d: %d\n",c,s);
        c++;
        m=0;
    }
    return 0;
}

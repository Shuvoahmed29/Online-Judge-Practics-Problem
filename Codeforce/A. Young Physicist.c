#include<stdio.h>
int main()
{
    int n,i,x[200],y[200],z[200],m1=0,m2=0,m3=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }

        for(i=0; i<n; i++)
        {
            m1=m1+x[i];
            m2=m2+y[i];
            m3=m3+z[i];

        }
        if(m1==0 && m2==0 && m3==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    return 0;
}

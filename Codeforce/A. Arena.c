#include<stdio.h>
int main()
{
    int t,i,k,j,n,min;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int a[n],w=1;
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        min=a[0];
        for(k=1; k<n; k++)
        {
            if(min>a[k])
            {
                min=a[k];
            }
        }
        for(j=0; j<n; j++)
        {
            if(min==a[j])
            {
                w=w+1;
            }
        }
        printf("%d\n",n-w+1);
    }
    return 0;
}

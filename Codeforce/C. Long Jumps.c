#include<stdio.h>
int main()
{
    int t,max,k,p;
    scanf("%d",&t);
    int i,n,j;
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(j=1; j<=n; j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1; j<=n; j++)
        {
            b[j]=j+a[j];
            while(b[j]<=n)
            {
                p=b[j];
                b[j]=p+a[p];
            }
            c[j]=b[j]-j;
        }
        max=c[1];
        for(k=2; k<=n; k++)
        {
            if(max<c[k])
            {
                max=c[k];
            }
        }
        printf("%d\n",max);
    }

    return 0;
}

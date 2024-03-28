#include <stdio.h>
void solve()
{
    int i,n,j,p,max,k;
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

int main()
{
    int t;
    scanf("%d",&t);
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,k=0,j=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]==1 && b[i]==1 && c[i]==1)
        {
            k++;
        }
        else if(a[i]==1 && b[i]==1 && c[i]==0)
        {
            k++;
        }
        else if(a[i]==1 && b[i]==0 && c[i]==1)
        {
            k++;
        }
        else if(a[i]==0 && b[i]==1 && c[i]==1)
        {
            k++;
        }
        else
        {
            j++;
        }


    }
    printf("%d\n",k);
}

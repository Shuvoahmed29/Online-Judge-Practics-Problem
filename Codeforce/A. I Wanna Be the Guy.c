#include<stdio.h>
int main()
{
    int n,p,q,a[200],i,copy,j,s=0;
    scanf("%d %d",&n,&p);
    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=p; i<q+p; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<p+q; i++)
    {
        for(j=i+1; j<p+q; j++)
        {
            if(a[i]>a[j])
            {
                copy=a[i];
                a[i]=a[j];
                a[j]=copy;
            }
        }
    }
    for(i=0; i<p+q; i++)
    {
        if(a[i]!=a[i+1])
            s=s+1;
    }
    if(s>=n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}

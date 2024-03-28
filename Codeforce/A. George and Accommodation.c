#include<stdio.h>
int main()
{
    int n,k=0,w;
    scanf("%d",&n);
    int p[2*n],q[2*n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p[i],&q[i]);
        if(p[i]>q[i]) w=p[i]-q[i];
        if(p[i]<q[i]) w=q[i]-p[i];
        if(p[i]!=q[i] && w>=2 )
        {
            k++;
        }
    }
    printf("%d\n",k);

}

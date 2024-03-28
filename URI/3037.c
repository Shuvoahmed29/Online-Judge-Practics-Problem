#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x,d;
    for(i=0; i<n; i++)
    {
        int p=0,k=0;
        scanf("%d %d",&x,&d);
        p=p+(x*d);
        scanf("%d %d",&x,&d);
        p=p+(x*d);
        scanf("%d %d",&x,&d);
        p=p+(x*d);
        scanf("%d %d",&x,&d);
        k=k+(x*d);
        scanf("%d %d",&x,&d);
        k=k+(x*d);
        scanf("%d %d",&x,&d);
        k=k+(x*d);
        if(k<p)
        {
            printf("JOAO\n");
        }
        else
            printf("MARIA\n");
    }
    return 0;
}

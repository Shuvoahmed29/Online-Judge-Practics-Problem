#include <stdio.h>
int main()
{
    int t,m,n;
    int i,j,l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
        scanf("%d%d",&m,&n);
        int cost[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&cost[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((cost[i]+cost[j]==m))
                {
                    printf("%d %d\n",i+1,j+1);
                }
            }
        }


    }
    return 0;
}

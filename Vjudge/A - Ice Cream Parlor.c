#include <stdio.h>
int main()
{
    int m,n,t,i,j,p;
    scanf("%d",&t);
    for(p=1;p<=t;p++)
    {
        scanf("%d %d",&m,&n);
        int A[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&A[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(A[i]+A[j] == m)
                {
                    printf("%d %d\n",i+1,j+1);
                }
            }
        }
    }
    return 0;
}


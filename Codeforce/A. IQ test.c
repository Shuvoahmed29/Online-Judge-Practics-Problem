#include<stdio.h>
int main()
{
    int n,i,e=0,o=0;
    scanf("%d",&n);
    int A[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e>o)
    {
        for(i=1;i<=n;i++)
        {
            if(A[i]%2!=0)
            {
                printf("%d\n",i);
                return 0;
            }
        }
    }
    else if(e<o)
    {
        for(i=1;i<=n;i++)
        {
            if(A[i]%2==0)
            {
                printf("%d\n",i);
                return 0;
            }
        }
    }

}

#include<stdio.h>
int main()
{
    long long int T,sum=0,ptr[100000],A[3],k=0;
    scanf("%lld",&T);
    long long int i,n,j,w,ws=0,q,qs=0,p=0,l=0,r=0;
    for(i=0; i<T; i++)
    {
        scanf("%lld",&n);
        for(j=0; j<n; j++)
        {
            scanf("%lld",&ptr[j]);
        }
        if(n == 1)
        {
            printf("YES\n");
        }
        else if(n == 2)
        {
            printf("NO\n");
        }
        else
        {
            while(l<n)//1 1 4 1 1
            {

                while(k<n)
                {
                    A[0]=ptr[k];
                    break;
                }
                for(w=0; w<k; w++)
                {
                    ws=ws+ptr[w];
                }
                for(q=k+1; q<n; q++)
                {
                    qs=qs+ptr[q];
                }

                if(ws==qs)
                {
                    printf("YES\n");
                    ws=qs=0;
                    r=5;
                }
                k=k+1;
                l=l+1;
            }

            if(r!=5)
            {
                printf("NO\n");
                ws=qs=0;
            }
        }
    }
}


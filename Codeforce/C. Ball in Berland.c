#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    int i,a,b,k;
    while(t-->0)
    {
        scanf("%d %d %d",&a,&b,&k);
        int A[k],B[k],p,l,m;
        p=k;
        l=k;
        m=k;
        for(i=0; i<k; i++)
        {
            scanf("%d",&A[i]);
        }
        for(i=0; i<k; i++)
        {
            scanf("%d",&B[i]);
        }


        for(i=0; i<k; i++)
        {
            for(j=1; j<k; j++)
            {
                if(A[i]==A[j])
                {
                    p=p-1;
                }
                if(B[i]==B[j])
                {
                    m=m-1;
                }
            }
        }
        printf("%d\n",p);
        printf("%d\n",m);
    }
    return 0;
}

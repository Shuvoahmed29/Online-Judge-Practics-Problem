#include<stdio.h>
int main()
{
    int N,A[10000],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++)
    {
        if(A[i]>0 && A[i]%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        if(A[i]>0 && A[i]%2!=0)
        {
            printf("ODD POSITIVE\n");
        }

        if(A[i]<0 && A[i]%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
         if(A[i]<0 && A[i]%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }

           if(A[i]==0)
        {
            printf("NULL\n");
        }
    }
    return 0;
}

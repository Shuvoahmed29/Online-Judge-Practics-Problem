#include<stdio.h>
int main()
{
    int N,A[10000],i,j=0,k=0;
    scanf("%d",&N);
     for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++)
    {
        if(A[i]>=10 && A[i]<=20)
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    printf("%d in\n",j);
    printf("%d out\n",k);
    return 0;
}

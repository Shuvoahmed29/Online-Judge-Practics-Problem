#include<stdio.h>
int main()
{
    int n,j,c=0;
    float sum=0,sum2=0,sum1=0;
    scanf("%d",&n);
    int i,A[n],copy;
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
   for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                copy=A[i];
                A[i]=A[j];
                A[j]=copy;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    sum1=sum/2;
    for(i=n-1;i>=0;i--)
    {
        sum2=sum2+A[i];//3 3
        c++;
        if(sum2>sum1)
            break;
    }
    printf("%d\n",c);
    return 0;

}

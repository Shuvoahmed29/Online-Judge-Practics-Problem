#include<stdio.h>
int main()
{
    long long int n,copy,j,m;
    scanf("%lld",&n);
    long long int A[n],i,k;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&A[i]);
    }
     for(i=1; i<n; i++)
    {
        j=i-1;
        k=A[i];
        while(j>=0 && A[j]>k)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=k;
    }
    m=((n+1)/2)-1;
    printf("%lld\n",A[m]);
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n],i;
    for(i = 0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int j,t,c=0;
    for(i=1; i<n; i++)
    {
        j=i;
        while(A[j]<A[j-1] && j>0)
        {
            t=A[j];
            A[j]=A[j-1];
            A[j-1]=t;
            j--;
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}

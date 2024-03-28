#include <stdio.h>
int main()
{

    int s,i,j;
    scanf("%d", &s);
    int A[s],k;
    for(i = 0; i < s; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i=1; i<s; i++)
    {
        k=A[i];
        j=i-1;
        while(j>=0 && k<A[j])//7 4 3 5 6 2
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=k;
    }
    for(j=0; j<s; j++)
    {
        printf("%d ",A[j]);
    }
    return 0;
}

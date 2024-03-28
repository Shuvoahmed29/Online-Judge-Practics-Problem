#include<stdio.h>
int main()
{
    int n,h=0;
    scanf("%d",&n);
    int A[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]==1)
            h++;
    }
    if(h>0)
        printf("HARD\n");
    else
        printf("EASY\n");
    return 0;

}

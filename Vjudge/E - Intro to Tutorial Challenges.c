#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v,i;
    scanf("%d",&v);
    int A[v];
    for(i=0;i<v;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]==n)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

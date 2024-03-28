#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char A[n];
    for(i=1; i<=n; i++)
    {
        scanf("%c",&A[i]);
        printf("%c",A[i]);
    }

}

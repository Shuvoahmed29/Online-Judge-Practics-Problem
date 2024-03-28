#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        result=result*(n-i);

    }
    printf("The result is : %d\n",result);
}

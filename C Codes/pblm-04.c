#include<stdio.h>
int main()
{
    int A[30];
    int n,i,max;
    printf("How many number do you want : ");
    scanf("%d",&n);
    printf("Enter %d number.\n",n);
    for(i=0;i<n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    max=A[0];
    for(i=1;i<n;i++)
    {
        if(max<A[i])
        max=A[i];

    }
    printf("Acending order is : %d\n",max);
}

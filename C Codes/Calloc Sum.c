#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,*p,n,i,sum=0;
    printf("Enter Any Integer Number : ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr!=NULL)
    {
        printf("Memory Allocation Successfully.\n");
    }
    p=ptr;
    printf("Enter Array element..\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",ptr);
        sum=sum+*ptr;
        ptr++;
    }
    printf("The array elements is.....");
    for(i=1; i<=n; i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("\nThe Sum is : %d\n",sum);
}

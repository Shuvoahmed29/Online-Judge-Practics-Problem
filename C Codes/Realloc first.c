#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int *ptr,n,i,sum=0,*p,*q,*k;
    printf("Enter any integer : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Out of the Memory.\n");
        exit(0);
    }
    p=ptr;
    printf("Enter %d element.\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",ptr);
        sum=sum+*ptr;
        ptr++;
    }
    printf("\nThe Array element are...");
    for(i=1;i<=n;i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("\nThe Sum is : %d\n",sum);
    printf("\nEnter new size for array.\n");
    scanf("%d",&n);
    k=(int*)realloc(ptr,n*sizeof(int));
   /* if(k==NULL)
    {
        printf("Out of the Memory.\n");
        exit(0);
    }*/
    q=k;
    printf("\nEnter %d element.\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",k);
        sum=sum+*k;
        k++;
    }
    printf("The Array element are...");
    for(i=1;i<=n;i++)
    {
        printf("%d ",*q);
        q++;
    }
    printf("\nThe Sum is : %d\n",sum);
    free(ptr);
    free(p);
}

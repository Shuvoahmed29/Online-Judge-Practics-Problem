#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
    int *ptr,*p,sum=0,i,n;
    printf("Enter any integer : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr!=NULL)
    {
        printf("Memory Allocate Succesfully\n");
    }
    p=ptr;
    printf("Enter the %d element of array.\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",ptr);
        sum=sum+*ptr;
        ptr++;
    }
    printf("\nThe Array Element are...");
    for(i=1;i<=n;i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("\nThe Sum is = %d\n",sum);
    free(ptr);
    free(p);
}

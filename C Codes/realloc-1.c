#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("Enter any Integer number : ");
    scanf("%d",&n);
    ptr = (int *)malloc(sizeof(int)*n);
    int *ptr_new,s;
    for(i=0; i<n; i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    printf("Enter new-size : ");
    scanf("%d",&s);
    ptr_new =realloc(ptr, s * sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("%d\n",*ptr_new);
        ptr_new++;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr,sum=0,*p,j;
    int n, i,ne;
    printf("\nEnter any integer number : ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    p=ptr;
    if (ptr == NULL)
    {
        printf("\nMemory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("\nMemory successfully allocated using Malloc.\n");
        printf("Enter the %d element of array.\n",n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",ptr);
            ptr++;
        }
        printf("\nThe Array Element are...");
        for(i=1; i<=n; i++)
        {
            printf("%d ",*p);
            p++;
        }
        printf("\n\nEnter the new size of the array: ");
        scanf("%d",&ne);
        ptr=realloc(ptr,ne*sizeof(int));
        ptr=p;
        printf("Enter the %d element of array.\n",ne);
        for(j=i; j<=ne; j++)
        {
            ptr++;
            scanf("%d",ptr);

        }
        printf("\nThe Array Element are...");
        for(i=1; i<=ne; i++)
        {
            printf("%d ",*p);
            p++;
        }
        free(ptr);
        free(p);
    }

    return 0;
}


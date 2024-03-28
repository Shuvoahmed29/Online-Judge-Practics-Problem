#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,*ptrn;
    ptr=(int*)malloc(4*sizeof(int));
    ptr=(int*)realloc(ptr,8*8);
    if(ptr!=NULL)
    {
        printf("Memory is allocated\n");
    }
    /*if(ptrn!=NULL)
    {
        printf("Memory is allocated\n");
    }*/
    for(i=0; i<16; i++)
    {
        scanf("%d",&ptr[i]);
    }
    /*for(i=0;i<8;i++)
    {
        printf("%d\n",ptr[0]);
        ptr++;
    }*/
    for(i=0;i<16;i++)
    {
        printf("%d\n",ptr[0]);
        ptr++;
    }
    free(ptr);
    free(ptrn);
}

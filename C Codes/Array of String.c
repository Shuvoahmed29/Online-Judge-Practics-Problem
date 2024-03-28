#include<stdio.h>
int main()
{
    char A[3][10];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%s",&A[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("%s\n",A[i]);
    }
    return 0;
}

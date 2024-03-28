#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:  ");
    scanf("%d",&n);
    if((n%2==0)||(n%5==0)||(n%11==!0))
    {
        printf("The number is divided");
    }
    else
    {
        printf("The number is not divided");
    }
    return 0;
}

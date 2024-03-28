#include<stdio.h>
#include<conio.h>
int main()
{
    int n,col,row;
    printf("Enter Any Integer Number : ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=0; col<n-row; col++)
            printf(" ");
        for(col=1; col<=2*row-1; col++)
        {
                printf("c");
        }
        printf("\n");
    }

    for(row=2; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=2*row-1; col++)
        {

            printf("c");
        }
        printf("\n");
    }
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<=11;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(l=0;l<=2;l++)
        {
            printf("V");
        }
        for(k=10;k>=i;k--)
        {
            printf("  ");
        }
        for(l=0;l<=2;l++)
        {
            printf("V");
        }
        printf("\n");
    }
}

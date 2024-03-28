#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=11;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("H");
        }
        for(k=1;k<=5;k++)
        {
            if(i>4 && i<7)
            {
                printf("HH");
            }
            else
            {
                printf("  ");
            }
        }
        for(j=0;j<2;j++)
        {
            printf("H");
        }
        printf("\n");
    }
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==0 && j<2 || i==1 && j<1 || i==11 && j<2 || i==10 && j<1)
            {
                printf(" ");
            }
            else
            {
                printf("O");
            }
        }
        for(k=1;k<=5;k++)
        {
            if(i>=0 && i<2 || i>9 && i<=11)
            {
                printf("OO");
            }
            else
            {
                printf("  ");
            }
        }
         for(j=0;j<=2;j++)
        {
            if(i==0 && j>0 || i==1 && j>1 || i==11 && j>0 || i==10 && j>1)
            {
                printf(" ");
            }
            else
            {
                printf("O");
            }
            }
              printf("\n");
}
}

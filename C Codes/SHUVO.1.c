#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<=11;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i>=0 && i<2 || i>4 && i<7 || i>=2 && i<=4 && j==1 || i>6 && i<=9 && j==8 || i>9 && i<=11)
        {
            printf("SS");
        }
        else
        {
            printf("  ");
        }
        }
       printf("\n");


        for(j=0;j<2;j++)
        {
            printf("H");
        }
        printf("\n");
    }
   for(i=0;i<=11;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("U");
        }
        for(k=1;k<=6;k++)
        {
            if(i>9 && i<=11)
            {
                printf("UU");
            }
            else
            {
                printf("  ");
            }
        }
            for(l=0;l<=2;l++)
        {
            printf("U");
        }

        printf("\n");
    }


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










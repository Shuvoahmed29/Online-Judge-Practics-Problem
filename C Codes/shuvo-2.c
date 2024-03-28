#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
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
    }

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
    return 0;
}



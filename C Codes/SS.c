#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
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
    return 0;
}


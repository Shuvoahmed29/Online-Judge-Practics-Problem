#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
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

}

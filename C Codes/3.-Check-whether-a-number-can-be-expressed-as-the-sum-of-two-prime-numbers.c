/*3. Check whether a number can be expressed as the sum of   two prime numbers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("Enter any Integer Number :  ");
    scanf("%d",&num);

    display(num);
    getch();
}

void display(int num)
{
    int i,j,k=0,start=1,s;

    for(i=start; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            s = num-i;
            k=0;
            for(j=1; j<=s; j++)
            {
                if(s%j==0)
                {
                    k++;
                }
            }
            if(k==2)
            {
                printf("\nYES,This Number is Expressed by \n");
                printf("\n%d  +  %d  =  %d\n",i,s,num);
            }
        }


        k=0;
    }
}

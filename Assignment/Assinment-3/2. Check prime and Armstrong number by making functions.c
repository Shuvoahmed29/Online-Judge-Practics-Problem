/*2. Check prime and Armstrong number by making functions*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num;

    printf("Enter any Integer Number : ");
    scanf("%d",&num);

    display(num);
    getch();
}
void display(int num)
{
    int i,j=0,k=0,sum=0,r,n1;

    for(i=1; i<=num; i++)
    {
        if(num%i== 0)
        {
            k++;
        }
    }

    if(k==2)
    {
        printf("\n%d is a Prime Number.\n",num);

    }
    else
    {
        printf("\n%d is NOT a Prime Number.\n",num);
    }

    n1=num;

    while(num!=0)
    {
        r = num%10;
        num = num/10;
        j++;
    }

    num=n1;

    while(num!=0)
    {
        r = num%10;
        sum = sum + pow(r,j);
        num = num/10;

    }

    if(sum==n1)
    {
        printf("\n%d is an Armstrong Number.\n",n1);

    }
    else
    {
        printf("\n%d is NOT an Armstrong Number.\n",n1);
    }

}

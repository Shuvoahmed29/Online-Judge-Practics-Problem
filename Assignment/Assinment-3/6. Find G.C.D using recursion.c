/*6. Find G.C.D using recursion.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;

    printf("Enter First Integer Number : ");
    scanf("%d",&num1);

    printf("Enter Second Integer Number : ");
    scanf("%d",&num2);

    int s = display(num1,num2);

    printf("\nThe G.C.D value is : %d\n",s);

    getch();
}

int display(int num1,int num2)
{
    int r;

    if(num1==0)
    {
        return num2;
    }
    if(num2==0)
    {
        return num1;
    }
    else
    {
       return display(num2,num1%num2);
    }
}

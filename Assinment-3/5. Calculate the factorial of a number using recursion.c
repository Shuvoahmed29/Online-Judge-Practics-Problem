/*5. Calculate the factorial of a number using recursion.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("Enter any Integer Number :  ");
    scanf("%d",&num);

    int sum = display(num);
    printf("\nThe Factorial Value is : %d\n",sum);
    getch();
}

int display(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*display(num-1);
    }
}

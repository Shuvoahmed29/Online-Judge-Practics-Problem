/*4. Find the sum of natural numbers using recursion.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("Enter any Natural Number : ");
    scanf("%d",&num);

    int s = display(num);
    printf("\nThe Sum is : %d\n",s);
    getch();
}

int display(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return num + display(num-1);
    }
}

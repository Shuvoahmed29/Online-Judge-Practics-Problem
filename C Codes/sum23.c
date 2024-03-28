#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum;
    printf("Enter two number :  ");
    scanf("%d%d",&a,&b);
    sum=~b;
    printf("1s compliment is : %d\n",sum);
    //sum=sum-1;
    //printf("2s compliment is : %d\n",sum);
    sum=-(sum-a)-1;
    printf("The Sum is : %d\n",sum);
    getch();

}


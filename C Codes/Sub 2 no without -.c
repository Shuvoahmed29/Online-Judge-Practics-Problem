#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sub;
    printf("Enter two number :  ");
    scanf("%d%d",&a,&b);
    sub=~b;
    printf("1s compliment is : %d\n",sub);
    sub=sub+1;
    printf("2s compliment is : %d\n",sub);
    sub=sub+a;
    printf("The Subtraction is : %d\n",sub);

}

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,g,l,h,rem,n1,n2;
    Printf("Enter two Number : ");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    g=n1;
    l=(num1*num2)/g;
    h=n1;

    printf("GCD = %d\n",g);
    printf("LCM = %d\n",l);
    printf("HCF = %d\n",h);
    getch();
}

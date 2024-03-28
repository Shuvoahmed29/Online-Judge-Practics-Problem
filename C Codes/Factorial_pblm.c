#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter Any integer Number[1-12] = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fact=fact*(n-i);
    }
    printf("The result is = %d\n",fact);
    getch();
}

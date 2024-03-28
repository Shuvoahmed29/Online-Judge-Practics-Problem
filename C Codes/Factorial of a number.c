#include<stdio.h>
int main()
{
    int N,i,sum=1;
    printf("Enter lest number = ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        sum=sum*(N-i);
    }
    printf("Factorial of a number is = %d\n",sum);
}

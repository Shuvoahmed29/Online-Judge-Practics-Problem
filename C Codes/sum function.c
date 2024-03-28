#include<stdio.h>
int result(int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2,n,i;
    printf("How many time to sum:   ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("Enter two number : ");
      scanf("%d %d",&num1,&num2);

    }
    for(i=1;i<=n;i++)
    {
      printf("The sum is :  %d\n",result(num1,num2));
    }



}


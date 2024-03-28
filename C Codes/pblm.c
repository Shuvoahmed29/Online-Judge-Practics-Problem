#include<stdio.h>
#include<math.h>
int disply(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,i);
    }
   return sum;
}
int main()
{
    int n;
    printf("Enter the last number of the series : ");
    scanf("%d",&n);
    int suma=disply(n);
    printf("The sum is : %d\n",suma);
}

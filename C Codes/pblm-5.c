#include<stdio.h>
#include<math.h>
int disply(int n)
{
    int i=1,sum=0,*p;
    p=&n;
  while(*p>=i)
    {
        sum=sum+pow(i,i);
        i++;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int sum=disply(n);
    printf("The sum is : %d\n",sum);

}

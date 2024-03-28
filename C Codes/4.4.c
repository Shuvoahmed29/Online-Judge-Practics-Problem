#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number=  ");
    scanf("%d",&n);
    while(n<=100)
    {
        n=n+1;
        if(n%2==0)
        {
            continue;
        }
    printf("%d\n",n);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i=1,mult=1;
    printf("Enter N = ");
    scanf("%d",&n);
    while(n>=i)
    {
        mult=mult*i;
        i++;
    }
    printf("Mult = %d\n",mult);
}

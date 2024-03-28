#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<2013)
    {
        printf("2013\n");
    }
    else if(n>=2013)
    {
        printf("2014\n");
    }
    return 0;
}

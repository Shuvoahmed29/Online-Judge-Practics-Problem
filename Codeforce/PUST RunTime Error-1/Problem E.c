#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N<1000)
    {
        printf("ABC\n");
        return 0;
    }
    while(N>=1000)
    {
        printf("ABD\n");
        return 0;
    }
}

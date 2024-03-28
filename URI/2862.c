#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
    }
    return 0;
}

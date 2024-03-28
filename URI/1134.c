#include<stdio.h>
int main()
{
    int n,p=0,q=0,t=0,th=0;
    while(1)
    {
        scanf("%d",&n);
        p++;
        if(n==1)
        {
            q++;
        }
        else if(n==2)
        {
            t++;
        }
        else if(n==3)
        {
            th++;
        }
        if(n==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",q);
    printf("Gasolina: %d\n",t);
    printf("Diesel: %d\n",th);
    return 0;
}

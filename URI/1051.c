#include<stdio.h>
int main()
{
    float n,d,e,f,x;
    scanf("%f",&n);
    if(n>=0.00 && n<=2000.00)
    {
        printf("Isento\n");
    }
     else if(n>=2000.01 && n<=3000.00)
    {
        d=n-2000.00;
        e=d*0.08;
        printf("R$ %0.2f\n",e);

    }
     else if(n>=3000.01 && n<=4500.00)
    {
        d=n-2000.00;
        f=d-1000.00;
        e=(1000.00*0.08)+(f*0.18);
        printf("R$ %0.2f\n",e);

    }
    else if(n>4500.00)
    {
        d=n-2000.00;
        f=d-1000.00;
        x=f-1500.00;
        e=(1000.00*0.08)+(1500.00*0.18)+(x*0.28);
        printf("R$ %0.2f\n",e);

    }
    return 0;
}

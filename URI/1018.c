#include<stdio.h>
int main()
{
    int N,r,i,k,l,m,o,p,q,s,t,z,w,x,y;
    scanf("%d",&N);
    if(0<N<1000000)
    {
        r=N/100;
        i=N%100;
        k=i/50;
        l=i%50;
        m=l/20;
        o=l%20;
        p=o/10;
        q=o%10;
        s=q/5;
        z=q%5;
        w=z/2;
        x=z%2;
        y=x/1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",N,r,k,m,p,s,w,y);
    }
    return 0;
}

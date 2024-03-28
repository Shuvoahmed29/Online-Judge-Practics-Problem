#include <stdio.h>
int main()
{
    int N,b;
    double P,Q,R;
    int c,B=0,e=0,f=0,A;
    char m[2],n[2];
    char p[2],q[2];
    scanf("%d", &N);
    for(b=1; b<=N; b++)
    {
        scanf("%d %s",&c,&m);
        if(m[0]=='C') B+=c;
        else if(m[0]=='R') e+=c;
        else if(m[0]=='S') f+=c;
    }
    A=B+e+f;
    P=(B/(A*1.0))*100.00;
    Q=(e/(A*1.0))*100.00;
    R=(f/(A*1.0))*100.00;
    printf("Total: %d cobaias\n",A);
    printf("Total de coelhos: %d\n",B);
    printf("Total de ratos: %d\n",e);
    printf("Total de sapos: %d\n",f);
    printf("Percentual de coelhos: %.2lf %%\n",P);
    printf("Percentual de ratos: %.2lf %%\n",Q);
    printf("Percentual de sapos: %.2lf %%\n",R);
    return 0;
}

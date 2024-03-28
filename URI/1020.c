#include<stdio.h>
int main()
{
    int N,a,m,d,p;
    scanf("%d",&N);
    if(N>=365)
    {
        a=N/365;
        p=N-(a*365);
        m=p/30;
        d=p-(30*m);
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    }
    else if(N<365)
    {
        a=0;
        m=N/30;
        d=N-(30*m);
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    }
     else if(N<30)
    {
        a=0;
        m=0;
        d=N;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    }
    return 0;
}

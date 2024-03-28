#include <stdio.h>
int main(int argc, const char * argv[])
{
    int t,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        long long p,a,b,c,a1,b1,c1,j,temp;
        scanf("%lld%lld%lld%lld",&p,&a,&b,&c);
        if(p%a==0 || p%b==0 || p%c==0)
        {
            printf("0\n");
        }
        else
        {
            a1=p%a;
            a1=a-a1;
            b1=p%b;
            b1=b-b1;
            c1=p%c;
            c1=c-c1;
            temp=a1;
            if(temp>b1)
            {
                temp=b1;
            }
            if(temp>c1)
            {
                temp=c1;
            }
            printf("%lld\n",temp);
        }
    }
return 0;
}

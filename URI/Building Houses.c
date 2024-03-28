#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p,i,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
        scanf("%d%d",&b,&c);
        p=((a*b*100)/c);
        for(i=1; i<=sqrt(p); i++)
        {
            if(d<=p)
                d=i*i;

        }
        printf("%d\n",i-1);
        scanf("%d",&a);
    }
    return 0;
}

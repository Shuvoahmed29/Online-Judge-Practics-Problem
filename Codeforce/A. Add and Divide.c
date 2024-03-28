#include<stdio.h>
int main()
{
    int t,a,b,i,s=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        s=0;
        scanf("%d %d",&a,&b);
        if(b>a)
        {
            s=1;
        }
        if(a==b)
        {
            s=2;
        }
        if(a>b)
        {
            while(a>0)
            {
                a=a/b;
                //printf("%d\n",a);
                s=s+1;
            }

        }
        printf("%d\n",s);
    }
    return 0;
}

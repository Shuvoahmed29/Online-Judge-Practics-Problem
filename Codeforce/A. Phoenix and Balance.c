#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,a=0,j,b=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        if(n<=2)
        {
            a=pow(2,n)-2;
            printf("%d\n",a);
        }
        else
        {
            b=0;
            a=0;
            for(j=1;j<(n/2);j++)
            {
                a=a+pow(2,j);
            }
            a=a+pow(2,n);
            for(j=n/2;j<n;j++)
            {
                b=b+pow(2,j);
            }
            printf("%d\n",(a-b));
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t,i,j,p=0;
    scanf("%d",&t);
    long long int n;
    while(t-->0)
    {
        scanf("%lld",&n);
        if(n>1 && n%2!=0)
        {
            printf("YES\n");
        }
        else
        {
            p=0;
            while(n>=1)
            {
                n=n/2;
                if(n%2!=0&&n!=1)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}

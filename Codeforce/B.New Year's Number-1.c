#include <stdio.h>
int main()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        if (n>=2020)
        {
            for(; n>=2020; n=n-2020)
            {
                if (n%2020==0 || n%2021==0)
                {
                    printf("YES\n");
                    break;
                }
            }
            if (n<2020)
            {
                printf("NO\n");
            }
        }
        else printf("NO\n");
    }


    return 0;
}

#include<stdio.h>
int main()
{
    int t,one=0,two=0,sum;
    scanf("%d",&t);
    int i,n,j;
    for(i=0; i<t; i++)
    {
        one=0;
        two=0;
        scanf("%d",&n);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }

        if ((one+2*two)%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            sum = (one+2*two)/2;
            if (sum%2==0 || (sum%2==1 && one!=0))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }


    }
    return 0;
}

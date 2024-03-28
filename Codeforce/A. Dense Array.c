#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],i,j,mx,mn,count=0,p,r,sum=0,k;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<n-1; j++)
        {
            count=0;
            if(a[j]>=a[j+1])
            {
                mx=j;
                mn=j+1;
            }
            else
            {
                mn=j;
                mx=j+1;
            }
            r=a[mx]/a[mn];
            p=a[mx]%a[mn];
            while(r>=2)
            {
                if(r==2 && p==0)
                {
                    break;
                }
                if(count==0)
                {
                    k=a[mn];
                    count++;
                }
                k=k*2;
                r=a[mx]/k;
                sum=sum+1;
                p=a[mx]%k;
                if(r==2 && p<1)
                {
                    break;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

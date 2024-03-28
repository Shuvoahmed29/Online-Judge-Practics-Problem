    #include<stdio.h>
    int main()
    {
        int i,t,n,k,d,r,sum;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            scanf("%d%d",&n,&k);
            if(n>=k)
            {
                if(n%k==0)
                {
                    printf("1\n");
                }
                else
                {
                    printf("2\n");
                }
            }
            else
            {
                d=k/n;
                r=k%n;
                if(r>0 && r<n)
                {
                    r=1;
                }
                sum=d+r;
                printf("%d\n",sum);
            }
        }
        return 0;
    }

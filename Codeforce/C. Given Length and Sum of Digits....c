#include<stdio.h>
#include<string.h>
int main()
{
    int m,s,i,r,sum=0,p,a[100000],b[100000],j=0,copy,k,len=0,x=0;
    scanf("%d %d",&m,&s);
    if(m==0 || s==0)
    {
        printf("-1 -1\n");
        return 0;
    }
    else if(m>=2)
    {
        for(i=10; i<10000; i++)
        {
            p=i;
            sum=0;
            while(p>=1)
            {
                r=p%10;
                sum=sum+r;
                p=p/10;
            }
            if(sum==s)
            {
                a[j]=i;
                j++;
            }
        }
        for(i=0; i<j; i++)
        {
            for(k=i+1; k<j; k++)
            {
                if(a[i]>a[k])
                {
                    copy=a[i];
                    a[i]=a[k];
                    a[k]=copy;
                }
            }
        }
        for(i=0; i<j; i++)
        {
            p=a[i];
            len=0;
            while(p>=1)
            {
                p=p/10;
                len++;
            }
            if(len==m)
            {
                b[x]=a[i];
                x++;
            }
        }
        for(i=0; i<x; i++)
        {
            for(k=i+1; k<x; k++)
            {
                if(b[i]>b[k])
                {
                    copy=b[i];
                    b[i]=b[k];
                    b[k]=copy;
                }
            }
        }
        printf("%d %d\n",b[0],b[x-1]);
        return 0;
    }
}

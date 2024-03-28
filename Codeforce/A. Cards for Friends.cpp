#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,h,n;
    int r=0,p,w;

    for(i=0; i<t; i++)
    {
        scanf("%d %d %d",&w,&h,&n);

        if(w%2==0 && h%2==0)
        {
            printf("YES\n");
        }
        else if(w%2!=0 && h%2!=0)
        {
            if(n==1)
                printf("YES\n");
            else
                printf("NO\n");
        }

        else
        {
            while(0<w && 0<h)
            {
                if(w%2==0 && h%2!=0)
                {
                    w=w/2;
                    r=r+2;
                }
                else if(w%2!=0 && h%2==0)
                {
                    h=h/2;
                    r=r+2;
                }
                if(r>=n)
                {
                    printf("YES\n");
                    r=0;
                    p=5;
                    break;
                }
            }
            if(p!=5)
            {
                printf("NO\n");
                r=0;
            }
        }
    }
    return 0;
}


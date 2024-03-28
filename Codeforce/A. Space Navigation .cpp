#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,len,i,R=0,L=0,U=0,D=0;
        cin>>x>>y;
        char a[100001];
        scanf("%s",&a);
        len=strlen(a);
        for(i=0; i<=len; i++)
        {
            if(a[i]=='R')
            {
                R++;
            }
            if(a[i]=='L')
            {
                L++;
            }
            if(a[i]=='U')
            {
                U++;
            }
            if(a[i]=='D')
            {
                D++;
            }
        }



        if(x==0 && y==0)
        {
            printf("YES\n");
        }
        else if(x==0 && y>0)
        {
            if(y<=U)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(x==0 && y<0)
        {
            y=fabs(y);
            if(y<=D)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(x>0 && y==0)
        {
            if(x<=R)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(x<0 && y==0)
        {
            x=fabs(x);
            if(x<=L)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(x>0 && y>0)
        {
            if(x<=R && y<=U)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

        else if(x<0 && y<0)
        {
            x=fabs(x);
            y=fabs(y);
            if(x<=L && y<=D)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

        else if(x>0 && y<0)
        {
            y=fabs(y);
            if(x<=R && y<=D)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

        else if(x<0 && y>0)
        {
            x=fabs(x);
            if(x<=L && y<=U)
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

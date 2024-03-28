#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,s;
        cin>>a>>b;
        s=a^b;
        cout<<s<<endl;
    }
    return 0;
}
/*#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,r,i=0,j=0,p=0;
    cin>>t;
    while(t--)
    {
        int a,c=0,k=0,b,b3[30],sum1,sum=0,b1[30],b2[30];
        cin>>a>>b;
        sum1=a+b;
        if(a>b)
        {
            c=1;
        }
        while(a!=0)
        {
            r = a%2;
            b1[i]=r;
            a=a/2;
            i++;
        }
        while(b!=0)
        {
            r = b%2;
            b2[p]=r;
            b=b/2;
            p++;
        }
        if(c==1)
        {
            for(j=p-1; j>=0; j--)
            {
                b3[k]=b1[j]*b2[j];
                k++;
            }
            while(b3!=0)
            {
                r = b3%10;
                sum = sum + r*pow(2,i);
                i++;
                b3 = b3/10;
            }
            printf("%d\n",b3);
        }
        else
        {
            for(j=i-1; j>=0; j--)
            {
                b3[k]=b1[j]*b2[j];
                k++;
            }
            while(b3!=0)
            {
                r = b3%10;
                sum = sum + r*pow(2,i);
                i++;
                b3 = b3/10;
            }
            printf("%d\n",b3);
        }

    }
    return 0;
}*/

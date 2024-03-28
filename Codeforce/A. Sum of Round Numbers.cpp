#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,p1,p2,p3,p4,cunt=0,p,w=0,j,len,s=0;
    cin>>t;
    while(t--)
    {
        cunt=0;
        w=0;
        s=0;
        cin>>n;
        p=n;
        p1=n%10;
        n=n-p1;
        if(p1!=0)
            cunt++;

        p2=n%100;
        n=n-p2;
        if(p2!=0)
            cunt++;

        p3=n%1000;
        n=n-p3;
        if(p3!=0)
            cunt++;
        p4=n%10000;
        n=n-p4;
        if(p4!=0)
            cunt++;
        if(cunt==0)
            cunt++;
        long long int arr[cunt];
        cout<<cunt<<endl;

        if(cunt==1)
        {
            cout<<p<<endl;
            s=1;
        }
        if(p1!=0 && s!=1)
        {
            arr[w]=p1;
            w++;
        }
        if(p2!=0&&s!=1)
        {
            arr[w]=p2;
            w++;
        }
        if(p3!=0&&s!=1)
        {
            arr[w]=p3;
            w++;
        }
        if(p4!=0&&s!=1)
        {
            arr[w]=p4;
            w++;
        }

        sort(arr,arr+cunt);
        if(s!=1)
        {
            for(j=0; j<cunt; j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

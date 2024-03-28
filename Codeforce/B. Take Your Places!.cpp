#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cunt=0,sub,temp,l=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
               if(arr[i]==arr[i+1]&&arr[i]!=arr[i+2])
               {
                   swap(arr[i+1],arr[i+2]);
                   cunt++;
                   continue;
               }
            }
        }
        if(cunt>0)
            cout<<cunt<<endl;
        /*else
            cout<<"-1"<<endl;*/
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cunt=0,sub,temp;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else if(n==3)
        {
            cout<<"1"<<endl;
            continue;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                sub=abs(arr[i+1]-arr[i]);
                if(sub==1)
                {
                    temp=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=temp;
                    cunt++;
                }
            }
        }
        if(cunt>0)
            cout<<cunt<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
*/

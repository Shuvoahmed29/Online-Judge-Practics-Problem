#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	vector<int> arr(n,0),srr(n,0);
	
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	srr=arr;
	sort(srr.begin(),srr.end());

	int cunt=0;
	for(int i=0;i<n;i++)
	{
	    if(srr[i]==arr[i])
            cunt++;
	}
	if(cunt==n)
	{
	    cout<<"yes"<<endl;
	    cout<<1<<" "<<1<<endl;
	    return 0;
	}
	
	int seg=0,l=0,r=0;
    
	for(int i=0;i<n-1 && seg<1;)
	{
	    if(arr[i]<arr[i+1])
            i++;
	    else
	    {
	        l=i;
	        r=i;
	        while(i<n-1 && arr[i]>arr[i+1])
	        {
	            i++;
	            r++;
	        }
	        seg++;
	        sort(arr.begin()+l,arr.begin()+r+1);
	    }
	}
	for(int i=0;i<n;i++)
	{
	    if(arr[i]!=srr[i])
	    {
	        cout<<"no"<<endl;
	        return 0;
	    }
	}

	cout<<"yes"<<endl;
	cout<<l+1<<" "<<r+1<<endl;
	return 0;
}
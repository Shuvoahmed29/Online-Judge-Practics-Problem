#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,p=0,k=0,i,len,j;
    char A[20];
    cin>>n;
    for(i=0; i<=n; i++)
    {
        gets(A);
        len=strlen(A);
        for(j=0;j<len;j++)
        {
            if(A[j]=='F')
                p++;
            else if(A[j]=='M')
                k++;
        }
    }
    cout<<k<<" carrinhos"<<endl;
    cout<<p<<" bonecas"<<endl;
    return 0;
}


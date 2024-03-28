#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,m;
    char A[10];
    cin>>n>>m;
    int j = n;
    for(int i=1;i<=m;i++)
    {
        cin>>A;
        if(A[0]=='f') j++;
        else j--;
    }
    cout<<j<<endl;
    return 0;
}

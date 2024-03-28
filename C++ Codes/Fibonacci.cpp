#include<iostream>
using namespace std;
int main()
{
    int a[100],N,i;
    cin>>N;
    a[0] = 0;
    a[1] = 1;

    for(i=2;i<N;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for(i=0;i<N;i++)
    {
        cout<<a[i];
        if(N-i>1)
        cout<<" ";
    }
    cout<<endl;
    return 0;
}

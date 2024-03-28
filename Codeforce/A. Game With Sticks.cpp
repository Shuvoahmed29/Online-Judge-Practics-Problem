#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,i=1,cunt=0;
    cin>>n>>m;
    for(;;)
    {
        if(m-i==0)
            break;
        if(n-i==0)
            break;
        i++;
        cunt++;
    }
    if(cunt%2==0)
    {
        cout<<"Akshat"<<endl;
    }
    else
        cout<<"Malvika"<<endl;
    return 0;
}

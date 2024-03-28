#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c1=0,m1=0,y=0;
    cin>>n>>m;
    char c;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>c;
            if(c=='C')
            {
                c1++;
            }
            else if(c=='M')
            {
                m1++;
            }
            else if(c=='Y')
            {
                y++;
            }
        }
    }
    cout<<"CMY:"<<c1<<m1<<y<<endl;
    if(c1>=1 && m1>=1 && y>=1)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0,l=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        k=0;
        l=0;
        for(int j=1; j<=m; j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else
            {
                if(i==2|| i==6||i==10||i==14||i==18||i==22||i==26||i==30||i==34||i==38||i==42||i==46||i==50)
                {
                    if(l==(m-1))
                    {
                        cout<<"#";
                        l++;
                    }
                    else
                    {
                        cout<<".";
                        l++;
                    }
                }
                else if(i==4||i==8||i==12||i==16||i==20||i==24||i==28||i==32||i==36||i==40||i==44||i==48)
                {
                    if(k==0)
                    {
                        cout<<"#";
                        k++;
                    }
                    else
                    {
                        cout<<".";
                    }
                    k++;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

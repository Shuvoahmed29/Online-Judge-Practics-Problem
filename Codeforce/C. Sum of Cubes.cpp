/*#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,i,j,sum,w=0,r;
        cin>>x;
        list<long long int>myl;
        list<long long int>::iterator it;
        while(x!=0)
        {
            r=x%10;
            myl.push_front(r);
            x=x/10;
        }

        /*for(it=myl.begin(); it!=myl.end(); it++)
        {
            cout<<*it<<" ";
        }
    }
    return 0;
}*/



#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,i,j,sum,w=0;
        cin>>x;
        for(i=1; i<=7993; i++)
        {
            for(j=1; j<=7993; j++)
            {
                sum=(i*i*i)+(j*j*j);
                if(sum==x)
                {
                    w=w+1;
                    break;
                }
            }
        }
        if(w>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
/*#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll T, x;

void solve()
{
    cin >> x;
    for (ll a = 1; a <= 7937; a++)
    {
        ll b = x - a * a * a;
        if (b <= 0) break;
        ll c = cbrt(b);
        if (b == c * c * c)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while (T--)
    {
        solve();
        cout << '\n';
    }
}*/


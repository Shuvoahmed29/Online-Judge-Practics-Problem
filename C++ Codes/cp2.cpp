#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> cost(n);
    for(auto &i:cost) cin>>i;

    int cnt = 0;


    while(1)
    {

        int count = 0, sum = 0;

        // sort the cost array
        Sort(cost);
        for (int i = 0; i < n; i++)
        {

            // Check if we can buy ith toy or not
            if (sum +cost[i] <= x)
            {
                sum = sum + cost[i];
                cost[i]++;
                // Increment count
                count++;
            }
        }
        if(count == 0)
        {
            cout<<cnt<<endl;
            return;
        }
        cnt += count;


    }

}
    // cout<<count<<endl;
    int main()
    {
        int tt = 1;
        cin >> tt;
        while(tt--)
        {
            solve();
        }

    }

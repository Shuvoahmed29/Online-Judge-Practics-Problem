#include<bits/stdc++.h>
using namespace std;
void code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
typedef long long ll;
bool isPossible(ll w,ll s,ll n, vector<ll>vec)
{
    ll total = 0;
    for(ll i=0; i<n; i++)
    {
        ll k = vec[i]+(2ll*w);
        total += (k*k);
        if(total>s) return false;
    }

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while(tt--)
    {
        ll n,s;
        cin >> n >> s;
        vector<ll>vec(n);
        ll first=0ll,last = (ll)1e10;
        for(ll i=0; i<n; i++)	cin >> vec[i];
        ll ans,k;

        while(first<=last)
        {
            ll mid = first+(last-first)/2ll;
            if(isPossible(mid,s,n,vec))
            {
                ans = mid;
                first = mid+1ll;
            }
            else last = mid-1ll;
        }
        cout << ans << endl;
    }
}


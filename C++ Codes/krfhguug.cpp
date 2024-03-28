#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int tab[5009], wiek[5009][5009], sumy[5009][5009];

void solve()
{
    long long n, a, b, c, wyn = 0;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>tab[i];
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) sumy[i][j] = wiek[i][j] = 0;
    a = 0;
    for(int i=1; i<=n; i++)
    {
        b = 0;
        for(int j=i+1; j<=n; j++)
        {
            if(tab[j] < tab[i]) b++;
            wiek[i][j] = b;
        }
        a += b;
    }
    for(int j=1; j<=n; j++)
    {
        b = 0;
        for(int i=j; i>=1; i--)
        {
            b += wiek[i][j];
            sumy[i][j] = b;
        }
    }
    for(int i=1; i<=n-3; i++)
    {
     c = wiek[i][n];
        a -= c;
        for(int j=i+2; j<n; j++)
        {
            if(tab[i] < tab[j])
            {
             b = a;
             c = sumy[i+1][j];
             b -= c;
             c = wiek[j][n];
             b -= c;
             c = sumy[j+1][n];
             b -= c;
                wyn += b;
            }
        }
    }
    cout<<wyn<<"\n";
    return;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}

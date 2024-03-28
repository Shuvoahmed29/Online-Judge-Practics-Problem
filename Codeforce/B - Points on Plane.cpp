#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tt, i, p;
    cin >> tt;
    while (tt--)
    {
        long double n;
        cin >> n;
        cout << (long long)sqrt(n - 1) << '\n';
    }
    // while(tt--){
    //     cin >> n;
    //     vector<long long> vec(n);
    //     vec[0] = 0;
    //     vec[1] = 4;
    //     p = 4;
    //     if(n == 1) cout << 0 << endl;
    //     else if(n<=4) cout << 1 << endl;
    //     else{
    //     for(i = 2;i<=n/2;i++){
    //         if(i%2 == 0) p = p+4;
    //         vec[i] = vec[i-1]+p;
    //         if(vec[i]>=n){
    //             cout << i << endl;
    //             break;
    //         }
    //     }
    //     }
    // }
}
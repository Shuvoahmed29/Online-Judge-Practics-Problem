#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main(){

    long long T,n,a,sum[1000010];
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> n;
        long long val = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            val += a;
            sum[i] = val;

        }
        if(n == 1)cout << "YES" << endl;
        else if(n == 2)cout << "NO" << endl;
        else{
            bool OK = true;
            for(int i = 1; i < n; i++){
                if(sum[i-1] == (sum[n-1]-sum[i])){
                    cout << "YES" << endl;
                    OK = false;
                    break;
                }
            }
            if(OK)cout << "NO" << endl;
        }
    }
    return 0;
}

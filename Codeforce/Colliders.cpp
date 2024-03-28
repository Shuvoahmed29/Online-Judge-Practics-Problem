#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int N=1e7+9;
vector<bool> vis(N);
vector<int> p;
vector<int> sm(N, 0);
vector<int> active(N, 0);
vector<int> v(N);//All Prime divisors
void seive(){
    sm[1] = 1;
    vis[1] = true;
    for (int i = 2; i < N; i++){
        if (vis[i] == false){
            sm[i] = i;
            p.push_back(i);
            for (int j = 2*i; j < N; j += i){
                // cout << j << " " << i << endl;
                if (sm[j] == 0) {
                    sm[j] = i;
                }
                vis[j] = true;
            }
        }
    }
}

int32_t main(){
    code();
    int n, m; cin >> n >> m;
    seive();
    int x;
    char ch;
    while (m--){
        cin >> ch >> x;
        if (ch == '+'){
            int y = x;
            if (active[y]){
                cout << "Already on\n";
            }
            else{
                int flag = 1; // by default true;
                vector<int> vec;
                while (y != 1){
                    // cout << x << " " << sm[y] << " " << y << endl;
                    int pr = sm[y];
                    if (pr == 1)  break;
                    while (y % pr == 0){
                        y /= pr;
                    }
                    if (v[pr] == 0){
                        // cout << pr << " " << x << endl;
                        vec.push_back(pr);
                        v[pr] = x;
                    }
                    else{
                        flag = 0;
                        cout << "Conflict with " << v[pr] << endl;
                        for (auto u : vec){
                            v[u] = 0;
                        }
                        break;
                    }
                }
                if (flag == 1){
                    cout << "Success" << endl;
                    active[x] = true;
                }
            }
        }
        else{
            if (!active[x]){
                cout << "Already off" << endl;
            }
            else{
                active[x] = false;
                int y = x;
                while (y != 1){
                    // cout << y << " " << sm[y] << endl;
                    int pr = sm[y];
                    if (pr == 1)   break;
                    while (y % pr == 0){
                        y /= pr;
                    }
                    v[pr] = 0;
                }
                cout << "Success" << endl;
            }
        }
    }
}
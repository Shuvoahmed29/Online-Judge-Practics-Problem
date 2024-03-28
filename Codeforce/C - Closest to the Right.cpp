#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, k;   cin >> n >> k;
    vector<int>vec1(n),vec2(k);
    for(auto &d:vec1)   cin >> d;
    for(auto &d:vec2){
        cin >>d;
        if(d > vec1[n-1]) cout << n+1 << '\n';
        else{
            auto it = lower_bound(vec1.begin(), vec1.end(),d);
            cout << (it - vec1.begin()) +1<< '\n';
        }
    }
}
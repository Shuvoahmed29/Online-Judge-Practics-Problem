#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt; cin >> tt;
    while(tt--){
        long long n;  cin >> n;
        vector<long long>vec;
        long long sum = 0;
        long long negative = 0;
        for(long long i = 0; i < n; i++){
            long long x;  cin >> x;
            sum +=abs(x);
            if(x<0) negative++;
            vec.push_back(x);
        }
        for(long long i=0; i<n; ++i){
           if(vec[i] < 0){
                vec[i] = (-1)*vec[i];
           }
        }
        if(negative % 2 == 0){
            cout << sum << endl;
        }
        else{
            long long mini = *min_element(vec.begin(), vec.end());
            cout << sum - 2*mini << endl;
        }
    }
}
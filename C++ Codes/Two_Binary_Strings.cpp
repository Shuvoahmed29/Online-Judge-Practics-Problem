#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

bool isPossibleToMakeEqual(const string& a, const string& b) {
    if (a == b) {
        return true;
    }
    
    int n = a.length();
    int count_a = 0, count_b = 0;
    
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] == '0') {
            count_a++;
        }
        if (b[i] == '0') {
            count_b++;
        }
        
        if (count_a != count_b) {
            return false;
        }
    }
    
    return true;
}

int main() {
    code();
    int t;
    cin >> t;
    
    vector<pair<string, string>> test_cases(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i].first >> test_cases[i].second;
    }
    
    for (int i = 0; i < t; ++i) {
        if (isPossibleToMakeEqual(test_cases[i].first, test_cases[i].second)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}






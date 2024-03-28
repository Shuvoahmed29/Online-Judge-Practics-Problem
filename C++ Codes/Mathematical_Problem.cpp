#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main() {
	code();
    int tt; cin >> tt;

    while(tt--){
    	int n; cin >> n;
    	if (n == 1)	cout << 1 << endl;

    	else{
    		vector<string> vec = {"169", "196", "961"};

    		while (vec.size() < n) {
        		for (int i = 0; i < vec.size(); i++) 
        			vec[i] += "00";

        		int x = vec.size();
        		string num1 = "1";
        		string num2 = "9";

        		for (int i = 0; i < (x - 1) / 2; i++) {
            		num1 += "0";
            		num2 += "0";
        		}

        		num1 += "6";
        		num2 += "6";

        		for (int i = 0; i < (x - 1) / 2; i++) {
            		num1 += "0";
            		num2 += "0";
        		}

        		num1 += "9";
        		num2 += "1";

        		vec.push_back(num1);
        		vec.push_back(num2);
        	}
        	for (auto it : vec)  cout << it << endl;
        }
    }
}
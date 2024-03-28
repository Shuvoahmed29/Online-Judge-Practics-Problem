// #include<bits/stdc++.h>
// using namespace std;
// void code(){
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }
// #define int long long
// int32_t main(){
// 	code();
// 	int tt;	cin >> tt;
// 	while(tt--){
//  		int n; cin >> n;
//  		vector<int>vec(n);
//  		for(int i=0;i<n;i++)	cin >> vec[i];
//  		vector<int>temp = vec;
//  		sort(vec.begin(),vec.end());
//  		map<int,int>mp;
//  		int sum = 0;
//  		for(int i=0;i<n;i++){
//  			sum += vec[i];
//  			int cunt = i;
//  			int score = sum;
//  			for(int j=i+1;j<n;j++){
//  				if(score>=vec[j]) {
//  					cunt++;
//  					score += vec[j];
//  				}
//  				else break;
//  			}
//  			mp[vec[i]] = cunt;
//  		}
//  		for(int i=0;i<n;i++){
//  			cout << mp[temp[i]] << " ";
//  		}
//  		cout << endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;

void code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

#define int long long

int32_t main() {
    code();
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        vector<int> temp = vec;
        sort(vec.begin(), vec.end());

        map<int, int> mp;
        int sum = 0;

        int p=0;
        for (int i = 0; i < n; i++) {
        	mp[vec[i]] = i;
        	p+=vec[i];
            vec[i] = p;
        }
        for (int i = 0; i < n; i++) {
        	sum+=temp[i];
            int idx = lower_bound(vec.begin(), vec.end(), sum) - vec.begin();
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}

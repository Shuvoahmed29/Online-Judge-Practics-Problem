#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
map<int,bool> mp;
int help(int n){
      int ans = 0;
       while(n!=0){
            int temp=n%10;
            ans += temp*temp;
            n/=10;
        } 
        return ans;
    }
int main(){
	code();
	int n;	cin >> n;
        int p = n;
        while(help(p)!=1){
            if(mp[help(p)]==true) cout << "false\n";
            else{
                mp[help(p)] = true;
                if(help(p)==1) cout << "true\n";
            }
            p = help(p);
        }
}

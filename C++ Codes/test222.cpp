#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int findXORSum(vector<int>arr, int n) {
   int sum = 0;
   for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
    sum += (arr[i]^arr[j]);
   return sum;
}
int32_t main() {
   code();
   int tt;  cin >> tt;
   while(tt--){
      int n;   cin >> n;
      vector<int>vec(n);
      for(int i=0;i<n;i++) cin >> vec[i];
      cout<<findXORSum(vec, n) << endl;
   }
}
#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int n;  cin >> n;
        string str1,str2; cin >> str1 >> str2;
        string rev = str2;
        int cunt = 0;
        if(str1!=str2){
            reverse(rev.begin(), rev.end());
            int pre=0,next=0;
            for(int i=0;i<n;i++){
                if(str1[i]!=str2[i]) pre++;
            }
            for(int i=0;i<n;i++){
                if(str1[i]!=rev[i]) next++;
            }
            cunt = pre*2;
            if(pre%2!=0) cunt--;
            if(next==0) cunt = min(cunt,2);
            else if(next%2==0) cunt = min(cunt,2*next-1);
            else cunt = min(cunt,2*next);
        }
        cout << cunt << endl;
    }
}
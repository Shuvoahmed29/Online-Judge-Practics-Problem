#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int tt; cin >> tt;
    while(tt--){
        string str1,str2; cin >> str1 >> str2;
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        int len1 = str1.size(), len2 = str2.size();
        vector<int> vec1(101),vec2(101);
        for(int i = 0; i < len1; i++) vec1[i] = (str1[i]-'0');
        for(int i = 0; i < len2; i++) vec2[i] = (str2[i]-'0');
        int p = 0,d=0;
        // for(int i = 100;i>=0;i--){
        //     cout << vec1[i] << " " << vec2[i] << endl;
        // }
        for(int i = 100; i >=0; i--){
            if(vec1[i] != vec2[i]){
                p = i;
                d = abs(vec1[i]-vec2[i]);
                break;
            }
        }
        cout << 9*p+d << endl;
    }
}
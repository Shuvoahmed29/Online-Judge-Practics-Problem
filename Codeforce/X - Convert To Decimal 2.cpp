#include<bits/stdc++.h>
using namespace std;
int32_t  main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,k=0;
        cin >> n;
        string binary = bitset<32>(n).to_string();
        int cunt = 0;
        for(int j=0;j<binary.size();j++){
            if(binary[j]=='1') cunt++;
        }
        string str(cunt,'1');
        unsigned long decimal = bitset<32>(str).to_ulong();
        cout<<decimal<<"\n";

    }
    // string binary = bitset<8>(8).to_string();
    // cout<<binary<<"\n";
    // unsigned long decimal = bitset<8>(binary).to_ulong();
    // cout<<decimal<<"\n";
}
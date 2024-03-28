#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    string pi = "314159265358979323846264338327";
    while(t--){
        string n;  cin >> n;
        if(n[0]!='3') cout << 0 << endl;
        else{
            int p = 0,cunt = 0;
            for(int i=0; i<n.size(); i++){
                if(n[i] == pi[p]){
                    cunt++;
                    p++;
                }
                else break;
            }
            cout << cunt << endl;
        }

    }
}
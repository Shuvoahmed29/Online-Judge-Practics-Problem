#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
ios_base::sync_with_stdio(0);
    code();
    cin.tie(0);
    string str; cin >> str;
    vector<char>op;
    vector<int>vec;
    char ch=' ';
    for(int i=0;i<str.size();i++){
        if(str[i]=='+' || str[i]=='-'){
                op.push_back(str[i]);
                str.erase(str.begin()+i);
                str.insert(str.begin()+i,ch);
        }
    }
    stringstream ss(str);
    string word;
    int p;
    while(ss>>word){
        p = stoi(word);
        vec.push_back(p);
    }
    int x ,y,k=0,sum=0;
    for(int i=0;i<vec.size()-1;i++){
        x = vec[i];
        y = vec[i+1];
        if(op[k]=='+'){
            sum=x+y;
        }
        else{
            sum=x-y;
        }
        k++;
        vec[i+1]=sum;
    }
    cout << vec[vec.size()-1] << endl;
}

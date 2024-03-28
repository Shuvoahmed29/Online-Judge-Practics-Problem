#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int main(){
  	int tt; cin >> tt;
    cin.ignore();
    while(tt--){
        string str1,str2;
        getline(cin,str1);
        getline(cin,str2);
        stringstream ss;
        ss<<str1;
        vector<int>idx;
        char word;
        while(ss>>word){
            idx.push_back(word-'0');
        }
        stringstream sss;
        sss<<str2;
        map<int,string>mp;
        string word1;
        int p=0;
        while(sss>>word1){
        	mp[idx[p]] = word1;
        	p++;
        }
       	for(int i=0;i<str1.size();i++){
       		//cout << mp[i] << '\n';
       		printf("%s\n",mp[i]);
       	}
    }
}

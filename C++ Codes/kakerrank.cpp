#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt=0;
    cin >> tt;
    cin.ignore();
    while(tt--)
    {
        string str,str1;
        getline(cin,str);
        str1 = str;
        stringstream ss;
        ss<<str;
        string word;
        map<string,int>mp,mp1;
        while(ss>>word){
            mp[word]++;
        }
        string s;
        int ans=-1;
        for(auto it:mp){
            ans = max(ans,it.second);
        }
        stringstream sss;
        sss<<str1;
        string word1;
        while(sss>>word1){
           mp1[word1]++;
           if(mp1[word1] == ans){
                cout << word1 << " " << ans << endl;
                break;
           }
        }
        mp.clear();
    }
}
/*
Sample Input 0

1
Ratul loves to play football when he gets time but Ratul is not a good player so his teacher asked Ratul if he can play with him so that Ratul can progress

Sample Output 0

Ratul 4

Sample Input 1

2
ratul piyush fohad shuvo rafi piyush fohad ratul
jony jony yes papa eating sugar no papa telling lies no papa open your mouth ha ha ha

Sample Output 1

piyush 2
papa 3
*/

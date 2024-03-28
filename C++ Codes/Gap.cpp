#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    string str;
    vector<int>vec;
    tt++;
    while(tt--)
    {
        getline(cin,str);
        int cunt=0;
        stringstream ss(str);
        string word;
        while(ss>>word){
            cunt++;
        }
        if(cunt !=0)cout << cunt << endl;
    }
}


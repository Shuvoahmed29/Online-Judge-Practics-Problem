#include<bits/stdc++.h>
using namespace std;
void code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    //code();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    vector<int>vec,ans,ans1;
    int p;
    set<int>st;
    while(ss>>word)
    {
        p = stoi(word);
        st.insert(p);
    }
    for(auto it:st)
    {
        vec.push_back(it);
    }
    int first=0,last=0,x,y,z;
    for(int i=0; i<vec.size(); i++)
    {
        x=vec[i];
        y=vec[i+1];
        if(x==y-1)
        {
            ans1.push_back(x);
            first = x;
            last = y;
            for(int j=i; j<vec.size(); j++)
            {
                if(vec[j]+1 == vec[j+1])
                {
                    ans1.push_back(vec[j+1]);
                    last=vec[j+1];
                    i=j;
                }
                else break;

            }
            cout << first << "-"<< last;
            i++;
        }
        else
        {
            cout << vec[i];
        }
        if(i<vec.size()-1) cout << ", ";
    }
}

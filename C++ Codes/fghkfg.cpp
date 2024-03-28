
#include <bits/stdc++.h>
using namespace std;
#define MOEZ ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(ar,x) memset(ar , x , sizeof(ar));
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define all(x) x.begin() , x.end()
typedef long long ll;
typedef double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const int Mod = 1e9 + 7;
const int N = 1e6+5;

void solve();

int main(){
    MOEZ
    int t;
    cin>>t;
    while (t--)
    {  solve();
    }
}

void findans(int node,vector<vector<int> >&arr,int par,int& index,vector<vector<int> >&ans,unordered_map<int,int>&help){
    if(par==-1){
        help[node]=++index;
        ans[index].push_back(node);

    }else{
        int index=help[par];
        ans[index].push_back(node);
        help[node]=index;
    }
    for(int i=0;i<arr[node].size();i++){
        if(i==0){
            findans(arr[node][i],arr,node,index,ans,help);
        }else{
            findans(arr[node][i],arr,-1,index,ans,help);
        }
    }
}

void cheat(){
    return;
}
void solve(){
    int n;
    cin>>n;

    vector<vector<int> > ans(n+1);
    unordered_map<int,int> help;
    vector<int> arr(n+1);

    vector<vector<int> >tree(n+1);
    int parent;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==i){
            arr[i]=-1;
            parent=i;
            continue;
        }
        tree[arr[i]].push_back(i);
    }
    help[parent]=0;
    int index=0;

    findans(parent,tree,parent,index,ans,help);
    cout<<index+1<<"\n";
    for(int i=0;ans[i].size()!=0;i++){
        cout<<ans[i].size()<<"\n";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    // hal el habd sa7? habd from what i learnt online
}


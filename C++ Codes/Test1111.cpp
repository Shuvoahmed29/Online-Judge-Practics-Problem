#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 30;
vector<int>vec[N];
int n;
pair<int,int> getposition(int x){
    for(int i=0;i<n;i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]==x) return make_pair(i,j);
        }
    }
    return make_pair(0,0);
}
void move_to_initial_position(int vector_id,int position){
    for(int i=position+1;i<vec[vector_id].size();i++){
        int x = vec[vector_id][i];
        vec[x].push_back(x);
    }
    vec[vector_id].resize(position+1);
}
void move_on_top(int vector_id,int position,int destination){
    for(int i=position;i<vec[vector_id].size();i++){
        int x = vec[vector_id][i];
        vec[destination].push_back(x);
    }
    vec[vector_id].resize(position);
}
int32_t main(){
    code();
    cin >> n;
    for(int i=0;i<n;i++){
        vec[i].push_back(i);
    }
    int tt;    cin >> tt;
    while(tt--){
        int x,y;
        string str;
        cin >> x >> str >> y;
        pair<int,int> pr = getposition(x);
        int vector_id_a = pr.first;
        int position_a = pr.second;
        pair<int,int> pr1 = getposition(y);
        int vector_id_b = pr1.first;
        int position_b = pr1.second;

        if(vector_id_a == vector_id_b) continue;
        if(str == "Algo"){
            move_to_initial_position(vector_id_a,position_a);
            move_to_initial_position(vector_id_b,position_b);
            move_on_top(vector_id_a,position_a,vector_id_b);
        }
        else if(str=="Bangla"){
            move_to_initial_position(vector_id_a,position_a);
            move_on_top(vector_id_a,position_a,vector_id_b);
        }
        else if(str == "29"){
            move_to_initial_position(vector_id_b,position_b);
            move_on_top(vector_id_a,position_a,vector_id_b);
        }
        else if(str == "Contest"){
            move_on_top(vector_id_a,position_a,vector_id_b);
        }
    }
    for(int i=0;i<n;i++){
        cout << i << ":";
        for(int j=0;j<vec[i].size();j++)
            cout << ' ' << vec[i][j];
        cout << endl;
    }
}
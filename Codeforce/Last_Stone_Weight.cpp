#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void help(vector<int>&vec){
	sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
	for(int i=0;i<vec.size()-1;i=0){
		if(vec[i]!=vec[i+1]){
			int p = vec[i]-vec[i+1];
			vec.erase(vec.begin()+i+1);
			vec.insert(vec.begin()+i+1,p);
			vec.erase(vec.begin()+i);
		}
		else{
			vec.erase(vec.begin()+i+1);
			vec.erase(vec.begin()+i);
			if(vec.size()==0) vec.insert(vec.begin(),0);
		}
		for(auto it:vec){
    		cout << it << " ";
    	}
    	cout << endl;
		sort(vec.begin(),vec.end());
    	reverse(vec.begin(),vec.end());
    	if(vec.size()==1) break;
	}
}
int main(){
	code();
	int n;	cin >> n;
	vector<int>vec(n);
	for(int i=0;i<n;i++)	cin >> vec[i];
    help(vec);
	cout << "Size: " << vec.size() << endl;
    for(auto it:vec){
    	cout << it << " ";
    }
}

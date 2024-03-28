#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin >> n;
        p=n;
        while(p--)cout<<"(";
        p=n;
        while(p--)cout<<")";
        cout<<"\n";
       for(int i = 1; i <= n - 1; i++)
       {
           for(int j = 1; j <= i ; j++)cout << "()" ;
           for(int j = i + 1; j <= n; j++)cout << "(";
           for(int j = i + 1; j <= n; j++)cout << ")";
           cout << endl;
       }
    }
    return 0;
}
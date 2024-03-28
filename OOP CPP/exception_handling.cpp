 #include<bits/stdc++.h>
using namespace std;
int main(){
    try{
        int n,m;
        cin>>n>>m;
        if(m==0)throw -1;
        double ans=(double)n/m;
        cout<<ans<<endl;
    }
    catch(...){
        cout<<"Zero is not valid.\n";
    }

}
    
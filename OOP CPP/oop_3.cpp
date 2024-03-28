#include<bits/stdc++.h>
using namespace std;
class test{
    int l;
    public:
    test(int t){
        l=t;
    }
    void t1(){
        cout<<"N : "<<l;
    }
};
int main(){
    test t(100);
    t.t1();
}
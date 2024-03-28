#include<bits/stdc++.h>
using namespace std;
class A{
private:
    int id=200129;
    string name="Shuvo Ahmed";
public:
    friend class B;
};
class B{
public:
    void display(A ob){
        cout<<ob.id<<"\n";
        cout<<ob.name<<endl;
    }
};
int main(){
    A ob1;
    B ob2;
    ob2.display(ob1);
}
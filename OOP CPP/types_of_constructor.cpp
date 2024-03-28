#include <bits/stdc++.h>
using namespace std;
class student{
public:
    int id;
    double gpa;
    void display(){
        cout << id << " " << gpa << endl;
    }
    student(int x,double y){
        id=x;
        gpa=y;
    }
    student(){
        cout<<"It's a default constructor.\n";
    }
};
int main(){
    student def;
    student shuvo(101,3.44),tamim(120,3.90);
    shuvo.display();
    tamim.display();
}
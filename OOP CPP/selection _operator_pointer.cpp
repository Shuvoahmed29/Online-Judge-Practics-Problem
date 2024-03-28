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
};
int main(){
    student shuvo(101,3.44),tamim(120,3.90);
    student *p=&shuvo;
    p->display();
    student *p1=&tamim;
    p1->display();
}
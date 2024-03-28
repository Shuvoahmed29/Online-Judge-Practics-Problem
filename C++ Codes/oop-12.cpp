#include <bits/stdc++.h>
using namespace std;
class B;
class C;
class A{
    float speed;
public:
    void set_value(float x){
        speed = x;
    }
    void display(){
        cout<<"Speed: "<<speed<<endl;
    }
    friend float func(A,B,C);
};
class B:public A{
    friend float func(A,B,C);
};

class C:public A{
    friend float func(A,B,C);
};
float func(A ob1,B ob2,C ob3){
    if(ob1.speed>ob2.speed && ob1.speed<ob3.speed)return ob1.speed;
    else if(ob1.speed>ob3.speed && ob1.speed<ob2.speed)return ob1.speed;
    else if(ob2.speed>ob1.speed && ob2.speed<ob3.speed)return ob2.speed;
    else if(ob2.speed>ob3.speed && ob2.speed<ob1.speed)return ob2.speed;
    else if(ob3.speed>ob1.speed && ob3.speed<ob2.speed)return ob3.speed;
    else if(ob3.speed>ob2.speed && ob3.speed<ob1.speed)return ob3.speed;
}
int main(){
    A a;
    a.set_value(10.67);
    a.display();

    B b;
    b.set_value(20.4356);
    b.display();

    C c;
    c.set_value(30.322);
    c.display();

    cout<<"Second Max: "<<func(a,b,c)<<endl;
}

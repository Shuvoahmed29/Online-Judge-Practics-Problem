#include <bits/stdc++.h>
using namespace std;
class student{
public:
    void display() const {
        cout<<"It's a constant object.\n";
    }
    void print(){
        cout<<"It's a Non-constant object.\n";
    }
};
int main(){
    const student ob;
    ob.display();
    student ob1;
    ob1.print();
}
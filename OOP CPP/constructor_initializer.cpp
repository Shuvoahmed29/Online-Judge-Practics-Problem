#include <bits/stdc++.h>
using namespace std;
class student{
public:
    const int id;
    const double gpa;
    int roll;
    student(int x,double y,int z)
    :id(x),gpa(y)
    {
        cout<<id<<endl;
        cout<<gpa<<endl;
        roll=z;
        cout<<roll<<endl;
    }
};
int main(){
    student ob(200129,3.89,1170);
}
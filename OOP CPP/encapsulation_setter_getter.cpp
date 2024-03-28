#include <bits/stdc++.h>
using namespace std;
class student{
private:
    string name;
    int id;
    double gpa;
public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    void setId(int x){
        id=x;
    }
    int getId(){
        return id;
    }
    void setGpa(double x){
        gpa = x;
    }
    double getGpa(){
        return gpa;
    }
};
int main(){
    student s1;
    s1.setName("Shuvo Ahmed");
    s1.setId(200129);
    s1.setGpa(4.89);
    cout<<s1.getName()<<" "<<s1.getId()<<" "<<s1.getGpa()<<endl;
}
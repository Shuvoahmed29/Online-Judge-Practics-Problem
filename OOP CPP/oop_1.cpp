#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    string s;
    /*public:
       void input(){
           cout<<"ID :";
           cin>>id;
           cout<<"Name: ";
           cin>>s;
       }
       void output(){
           cout<<id<<endl;
           cout<<s<<endl;
       }*/
};
int main()
{
    student s;
    cin >> s.id;
    cout << "ID : " << s.id << endl;
    return 0;
}
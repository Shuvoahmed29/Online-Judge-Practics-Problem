#include <bits/stdc++.h>
using namespace std;

class A{
    char *s;
public:
    A(char *str){
        //strcpy(s,str);
        for(int i=0;*(str+i)!='\0';i++){
            *(s+i)=*(str+i);
        }
    }
    void display(){
        cout<<s<<endl;
    }
};

int main(){
    A obj("sakib");
    obj.display();
}

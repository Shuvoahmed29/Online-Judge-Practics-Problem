#include<bits/stdc++.h>
using namespace std;
class sms{
public:
    virtual void sendMessage()=0;
    void call(){
        cout<<"Calling\n";
    }
};
class shuvo:public sms{
public:
    void sendMessage(){
        cout<<"Hello,this is shuvo\n";
    }
};

class tamim:public sms{
public:
    void sendMessage(){
        cout<<"Hello,this is Tamim\n";
    }
};
int main(){
    sms *m;
    shuvo s;
    tamim t;
   s.sendMessage();
   t.sendMessage();
   m->call();
}
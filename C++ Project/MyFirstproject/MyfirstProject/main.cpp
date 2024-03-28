#include <iostream>
#include "myfirstclass.h"
using namespace std;

int main()
{
    myfirstclass ob1;
    //ob1.display();
    myfirstclass *p=&ob1;
    p->display();
    const int x=10;
    cout<<x<<endl;
    const myfirstclass ob2;
    ob2.display1();
}


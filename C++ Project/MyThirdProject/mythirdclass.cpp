#include <iostream>
#include "mythirdclass.h"
using namespace std;
MyThirdClass::~MyThirdClass()
{
    cout<<"Destructor is Called"<<endl;
}
MyThirdClass::MyThirdClass()
{
    cout<<"Constructor is Called"<<endl;
}

void MyThirdClass::display()
{
    cout<<"Display is Called"<<endl;
}

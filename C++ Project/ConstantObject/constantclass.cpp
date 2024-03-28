#include <iostream>
#include "constantclass.h"
using namespace std;


void ConstantClass :: display1() const
{
    cout<<"I am Constant Object"<<endl;
}
void ConstantClass :: display2()
{
    cout<<"I am Non-Constant Object"<<endl;
}


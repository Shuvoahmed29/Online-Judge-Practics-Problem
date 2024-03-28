#include <iostream>
#include "myfirstclass.h"
using namespace std;

myfirstclass::myfirstclass()
{
    cout<<"This is a Constructor.\n";
}
//myfirstclass::~myfirstclass()
//{
   // cout<<"This is Destructor\n";
//}
void myfirstclass::display()
{
    cout<<"This is a Display function.\n";
}
void myfirstclass::display1() const
{
    cout<<"This is a Constant Class.\n";
}

#include <iostream>
#include "sectionclass.h"
using namespace std;

int main()
{
    SectionClass ob;
    SectionClass *p= &ob;
    p->display();
    return 0;
}

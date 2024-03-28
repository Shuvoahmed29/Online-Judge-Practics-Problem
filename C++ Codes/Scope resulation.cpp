#include<iostream>
#include<conio.h>
using namespace std;
 int x=10;
void display()
{
    cout<<" "<<x<<endl;
}
int main()
{
     int x=100;
     ::x=900;
    cout<<x<<endl;
    display();
    getch();
}

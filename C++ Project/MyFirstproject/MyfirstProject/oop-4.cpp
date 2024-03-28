#include<bits/stdc++.h>
using namespace std;
class hello
{
private:
    int i,j;
public:
    hello()
    {

    }
    hello(int x)
    {
        i=x;
        j=0;
    }
    hello(int x,int y)
    {
        i=x;
        j=y;
    }
    void display()
    {
        cout<<i<<" "<<j<<endl;
    }
};
int main()
{
    hello arr[3]={hello(222,-90),hello(333,-89),hello(444,-67)};
    //arr[0]=100;
    //arr[1]=200;
    //arr[2]=333;
    for(int i=0; i<3; i++)
        arr[i].display();
}

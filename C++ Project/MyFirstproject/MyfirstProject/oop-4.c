#include<bits/stdc++.h>
using namespace std;
class hello
{
private:
    int i,j;
public:
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
    hello s1(190,200);
    s1.display();
}

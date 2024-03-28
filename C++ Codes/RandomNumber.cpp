#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    for(int i=1; i<=10; i++)
    {

        int ran=rand()%5 +1;
        cout<<"The random number-"<<i<<"-is = "<<ran<<endl;
    }
    getch();
}

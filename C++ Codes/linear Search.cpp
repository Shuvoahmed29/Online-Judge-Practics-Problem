#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int posi=-1,i,value=10;
    for(i=0;i<10;i++)
    {
        if(value==a[i])
        {
            posi = 1+i;
            break;
        }
    }
    if(posi==-1)
    {
        cout<<"Value is NOT found"<<endl;
    }
    else
    {
        cout<<"The "<<value<<" Number Position is : "<<posi<<endl;
    }
}

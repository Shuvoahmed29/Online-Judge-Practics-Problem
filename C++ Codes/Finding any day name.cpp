#include<iostream>
using namespace std;
int main()
{
    int year,n,p,total,date,c,month,k;
    string week[]={"SAT","SUN","MON","TUE","WED","THU","FRI"};
    cout<<"Enter a Year: ";
    cin>>year;
    cout<<"Jan-1, Feb-4, Mar-4, Apr-0, May-2, Jun-5, July-0, Aug-3, Sept-6, Oct-1, Nov-4, Dec-6"<<endl;
    cout<<"Enter a Month Code: ";
    cin>>month;
    cout<<"Enter a Date: ";
    cin>>date;
    year=year-1900;
    p=year%4;
    k=year/4;
    if((p==0 && month==1) ||(p==0 && month==4))
    {
        k=k-1;
    }
    total=year+k+date+month;
    c=total%7;
    if(c==0)
    {
        cout<<"The Day is:"<<week[0]<<endl;
    }
    else if(c==1)
    {
        cout<<"The Day is:"<<week[1]<<endl;
    }
    else if(c==2)
    {
        cout<<"The Day is:"<<week[2]<<endl;
    }
    else if(c==3)
    {
        cout<<"The Day is:"<<week[3]<<endl;
    }
    else if(c==4)
    {
        cout<<"The Day is:"<<week[4]<<endl;
    }
    else if(c==5)
    {
        cout<<"The Day is:"<<week[5]<<endl;
    }
    else if(c==6)
    {
        cout<<"The Day is:"<<week[6]<<endl;
    }
    return 0;
}

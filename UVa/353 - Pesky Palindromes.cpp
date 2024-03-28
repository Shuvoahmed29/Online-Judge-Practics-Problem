#include<iostream>
using namespace std;
int main()
{
    int n=4,len;
    string str;
    while(n--)
    {
        cin>>str;
        len=str.size();
        cout<<"The string "<<str<<"contains "<<len<<" palindromes."<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i=1;
    while(a[0]!='*')
    {
        if(a[0]=='H' && a[1]=='a' && a[2]=='j' && a[3]=='j')
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(a[0]=='U' && a[1]=='m' && a[2]=='r' && a[3]=='a' && a[4]=='h')
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
        cin>>a;
    }
    return 0;
}

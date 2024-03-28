#include<iostream>
using namespace std;
int main()
{
    int num,i,len,j,sum=0;
    cin>>num;
    string str;
    while(num--)
    {
        sum=0;
        cin>>str;
        len=str.size();
        for(j=1;j<len;j++)
        {
           if(str[j]==str[0])
                {cout<<j<<endl;
                break;}
        }
    }
    return 0;
}
/*#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int test,i,j,len;
    string s;
    int got;
    scanf("%d", &test);
    while(test--)
    {
        cin>>s;
        len = s.length();
        got = true;
        for(i=1; i<=len; i++)
        {
            if(len%i!=0)continue;
            for(j=i; j<len; j++)
                if(s[j]!=s[j%i])
                {
                    got = false;
                    break;
                }
            if(got)break;
           got = true;
        }
        printf("%d\n",i);
        if(test)printf("\n");
    }
    return 0;
}*/

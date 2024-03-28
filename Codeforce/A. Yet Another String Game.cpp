#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char x[50];
        scanf("%s",&x);
        int len=strlen(x);
        for(int i=0; i<len; i=i+2)
        {
            if(x[i]=='a')
            {
                printf("b");
            }
            else if(x[i]!='a')
            {
                printf("a");
            }

            if(x[i+1]=='z')
            {
                printf("y");
            }
            else if(x[i+1]!='z' && x[i+1]!='\0')
            {
                printf("z");
            }
        }
        printf("\n");
    }
    return 0;
}

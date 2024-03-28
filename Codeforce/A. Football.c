#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,k=0,t;
    char str[100];
    gets(str);
    int len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='1')
        {
            j++;
            k=0;
        }
        else
        {
            k++;
            j=0;
        }
        if(k==7 || j==7)
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

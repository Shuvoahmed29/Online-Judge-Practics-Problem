#include<stdio.h>
int main()
{
    char ch[100];
    int i,len,j=0,k=0,t=0;
    gets(ch);
    len=strlen(ch);
    for(i=0; i<len; i++)
    {
          if(ch[i]=='0')
            {
                j++;
                k=0;
            }
            else

            {
                k++;
                j=0;
            }
        if(j==7 || k==7)
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


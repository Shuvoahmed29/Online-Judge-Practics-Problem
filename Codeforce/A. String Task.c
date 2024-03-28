#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,len,k=0;
    gets(ch);
    len = strlen(ch);

    for(i=0; ch[i]!=NULL; i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            ch[i] = ch[i] +32;
        }
    }
    for(i=0; i<len; i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        {
            printf("");
            k++;
        }

        else
        {

                printf(".");
                 printf("%c",ch[i]);


        }
    }
    return 0;

}

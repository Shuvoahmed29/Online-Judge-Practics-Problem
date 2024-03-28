#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int m,n,i,j,put=0;
    printf("Main String Length: ");
    scanf("%d",&n);
    printf("Sub String Length: ");
    scanf("%d",&m);

    char *str,*sub;
    str=(char*) malloc (n*sizeof(char));
    sub=(char*) malloc (m*sizeof(char));
    printf("Main String: ");
    scanf("\n",str);
    gets(str);
    printf("Sub String: ");
    scanf("\n",sub);
    gets(sub);

    for(i=j=0; str[i]; i++)
    {
        if(str[i]==sub[j])
        {
            j++;
        }
        else if(str[i]==sub[0])
        {
            j=1;
        }
        else
        {
            j=0;
        }

        if(sub[j]=='\0')
        {
            put++;
            j=0;
        }

    }
    printf("Number of substring:%d\n",put);
    getch();
}

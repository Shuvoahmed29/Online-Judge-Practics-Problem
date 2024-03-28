#include<stdio.h>
int main()
{
    char mess[5];
    int i,cpy[5];
    for(i=0;i<5;i++)
    {
        scanf("%c",&mess[i]);
        cpy[i]=mess[i]+1;
    }
    for(i=0;i<5;i++)
    {
        printf("%c",cpy[i]);
    }
}



/*#include<stdio.h>
int main()
{
    char mess[10];
    int i;
    printf("Enter message : \n");
    for(i=0;i<10;i++)
    {
        mess[i]=getche();
        if(mess[i]=='\r') break;
    }
    printf("\n");
    for(i=0;mess[i]!='\r';i++)
        printf("%c",mess[i]+1);
    return 0;
}*/

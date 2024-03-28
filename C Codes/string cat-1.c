#include<stdio.h>
int main()
{
    char s1[300];
    char s2[300];
    printf("Enter your first word : ");
    gets(s1 );
    printf("\nEnter your second word :  ");
    gets(s2);
    int i=0,j=0,c=0;
   while(s1[i]!='\0')
    {
        i++;
        c++;
    }
    while(s2[j]!='\0')
    {
        s1[c+j]=s2[j];
        j++;
    }
    printf("length = %d\n",c);
    printf("\nString cat : %s\n",s1);
}

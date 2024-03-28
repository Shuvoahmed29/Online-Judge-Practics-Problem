111111111111111111111111111111111111111111111111111


#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10000];
    int i=0,v=0,d=0,c=0;
    printf("Enter a string : ");
    gets(str);
    int len=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
        v++;
    }
    else if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='0')
    {
        d++;
    }
    else
    {
        c++;
    }
    }
    printf("%d vowels\n",v);
    printf("%d Consonants\n",c);
    printf("%d Digits\n",d);
    getch();
}



222222222222222222222222222222222222222222



#include<stdio.h>
#include<conio.h>
int main()
{
    char str[1000],e;
    int len=0,i=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
        len++;
    }

    for(i=len;i>=0;i--)
    {
        e=str[i];
        printf("%c",e);
    }
    getch();

}


3333333333333333333333333333333333


#include<stdio.h>
#include<conio.h>
int main()
{
    char str[1000],e;
    int len=0,i=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    printf("The length of a string is : %d\n",len);
    getch();
}





44444444444444444444444444444444444444444

#include<stdio.h>
#include<conio.h>
int main()
{
    char str2[100],str1[200];
    int len=0,i=0,j=0;
    printf("Enter First string :");
    gets(str1);
    printf("Enter Second string : ");
    gets(str2);
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
     while(str2[j]!='\0')
    {
       str1[len+j]=str2[j];
       j++;
    }
    printf("str1=%s\n",str1);

    getch();

}





55555555555555555555555555555555

#include<stdio.h>
#include<conio.h>
int main()
{
    char str[500];
    printf("Enter a string : ");
    gets(str);
    int len=0,i=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
        printf("");
    }
    else
    {
        printf("%c",str[i]);
    }
}
getch();
}



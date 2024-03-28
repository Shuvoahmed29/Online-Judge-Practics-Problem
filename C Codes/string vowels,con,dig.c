#include<stdio.h>
int main()
{
    char str[30],ch;
    int vowel,con,digit,word,others,i;
    printf("Enter a string : ");
    gets(str);
    i=vowel=con=digit=word=others=0;
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
         con++;
         else if(ch>='0' && ch<='9')
            digit++;
         else if(ch==' ')
            word++;
            else
            others++;
            i++;

    }
    word++;
    printf("The number of Consonent is : %d\n",con);
    printf("The number of vowels is : %d\n",vowel);
    printf("The number of digit is : %d\n",digit);
    printf("The number of others is : %d\n",others);
    printf("The number of word is : %d\n",word);
}

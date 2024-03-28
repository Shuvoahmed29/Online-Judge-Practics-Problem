#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20],ch[20];
    printf("Enter your name :");
    gets(ch);
    fptr=fopen("Raihanul.bin","wb+");
    fwrite(ch,sizeof(ch),1,fptr);
    fseek(fptr,0,0);
    fread(str,sizeof(ch),1,fptr);
    printf("\nAfter Reading : %s\n",str);
    fclose(fptr);
}

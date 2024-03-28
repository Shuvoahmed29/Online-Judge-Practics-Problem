#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch[]="Shuvo Ahmed";
    char str[20];
    fptr=fopen("Shuvo.txt","wb+");
    fwrite(ch,sizeof(ch),1,fptr);
    fseek(fptr,0,0);
    fread(str,sizeof(ch),1,fptr);
    printf("%s",str);
    fclose(fptr);
}

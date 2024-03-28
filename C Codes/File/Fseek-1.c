#include<stdio.h>
int main()
{
    FILE *fptr;
    char A[40],ch;
    fptr=fopen("Shuvo.txt","r");
    fseek(fptr,5,0);
    while((ch=fgetc(fptr ))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);
}

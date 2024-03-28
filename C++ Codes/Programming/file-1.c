// 1. Write a c program to open a file and write some text and close its.
/*#include<stdio.h>
int main(){
    FILE *file;
    file=fopen("tamim.txt","w");
    char str[100];
    gets(str);
    fputs(str,file);
    return 0;
}*/
// 2. Write a C program to delete a file.
/*#include <stdio.h>
int main()
{
    FILE *file;
    remove("test.txt");
}*/
//3. Write a C program to copy a file from one location to other location.
//4. Write a C program to copy a data of file to other file.
/*#include <stdio.h>
    int main(){
    FILE *form;
    form = fopen("file-1.c", "r");
    FILE *to;
    to = fopen("tamim.txt", "w");
    char ch;
    ch = fgetc(form);
    while (!feof(form))
    {
        fputc(ch, to);
        ch = fgetc(form);
    }
    fclose(form);
    fclose(to);
}*/
//5. Write a C program which display source code as an output.
/*#include <stdio.h>
int main()
{
    FILE *file1;
    file1 = fopen("file-1.c", "r");
    char ch;
    ch = fgetc(file1);
    while (!feof(file1))
    {
        printf("%c", ch);
        ch = fgetc(file1);
    }
    fclose(file1);
}*/

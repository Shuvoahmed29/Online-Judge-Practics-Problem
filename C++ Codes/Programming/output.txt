//C program to copy contents of one file to another file
#include <stdio.h>
int main()
{
    FILE *file1;
    file1 = fopen("input.c", "r");
    FILE *file2;
    file2 = fopen("output.txt", "w");
    char ch;
    ch = fgetc(file1);
    while (!feof(file1))
    {
        fputc(ch, file2);
        ch = fgetc(file1);
    }
    fclose(file1);
    fclose(file2);
    return 0;
}
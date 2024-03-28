#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("file-3.c", "r");
    FILE *f1;
    f1 = fopen("pagla.txt", "w");
    char ch;
    ch = fgetc(file);
    while (!feof(file))
    {
        fputc(ch, f1);
        ch = fgetc(file);
    }
    fclose(file);
    fclose(f1);
    return 0;
}
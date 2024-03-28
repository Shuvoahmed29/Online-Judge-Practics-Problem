#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*file;
    char ch;

    file = fopen("test.txt","r");
    if(file==NULL)
    {
        printf("This file is not open.\n");
    }
    else
    {
        printf("This file is open Successfully.\n");
        while(!feof(file))
        {
          ch=fgetc(file);
          printf("%c",ch);
        }
        fclose(file);

    }
    getch();

}


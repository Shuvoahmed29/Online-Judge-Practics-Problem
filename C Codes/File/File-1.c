#include<stdio.h>
int main()
{
    FILE*file;
    file=fopen("test.txt","w");
    if(file==NULL)
    {
         printf("This file dosen't exit");
    }

    else
    {
       printf("This file is open");
       fclose(file);
    }
}

#include<stdio.h>
int main()
{
    FILE*file;
    file=fopen("test.txt","a");
    char A[600];

    if(file==NULL)
    {
        printf("File dose not exit\n");
    }
    else
    {
       printf("File is open\n");
       printf("Enter your university name: ");
       gets(A);
       fputs(A,file);
       fputs("\n",file);
       fclose(file);
       printf("File is open successfully\n");
    }

}

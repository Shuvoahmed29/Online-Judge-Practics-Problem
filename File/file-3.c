#include<stdio.h>
int main()
{
    FILE*file;
    file=fopen("shuvo.txt","w");
    char A[60]="Md Raihanul Shuvo Haque";
    int length=strlen(A);
    int i;
    if(file==NULL)
    {
        printf("File dose not exit\n");
    }
    else
    {
        printf("File is open\n");
        for(i=0;i<length;i++)
        {
          fputc(A[i],file);
        }
        fclose(file);
    }

}

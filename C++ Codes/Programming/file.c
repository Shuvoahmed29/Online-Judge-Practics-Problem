/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100],sub[50],all[200];
    int posi,p=0;
    gets(str);
    gets(sub);
    scanf("%d",&posi);
    for(int i=0;i<posi;i++){
        all[p]=str[i];
        p++;
    }
    all[p]=' ';
    for(int j=0;j<strlen(sub);j++){
        all[p]=sub[j];
        p++;
    }
    all[p]=' ';
    for(int i=posi;i<strlen(str);i++){
        all[p]=str[i];
        p++;
    }
    printf("%s\n",all);
}*/
/*#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    gets(str);
    int s,e;
    scanf("%d%d",&s,&e);
    for(int i=0;i<strlen(str);i++){
        if(s<=i && i<=e)continue;
        else printf("%c",str[i]);
    }
}*/
/*#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    char c[20] = "Shuvo Ahmed";
    fptr = fopen("text.txt", "w");
    if (fptr == NULL)
        printf("File is NULL\n");
    else
    {
        printf("File is creating\n");
        for (int i = 0; i < strlen(c); i++)
        {
            fputc(c[i], fptr);
        }
        printf("File is writing successfully\n");
    }
}*/
/*#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "a");
    char str[100];
    if (file == NULL)
        printf("File dose not exesist\n");
    else
    {
        printf("File open Successfully\n");
        printf("Enter Your text: ");
        gets(str);
        fputs(str, file);
        printf("File is writen successfully\n");
        fclose(file);
    }
}*/
#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("text.txt", "r");
    char ch;
    if (file == NULL)
        printf("File Dosen't exist\n");
    else
    {
        printf("File is Exist\n");
        while (!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    return 0;
}
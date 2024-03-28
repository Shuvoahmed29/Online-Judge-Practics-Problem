#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch[30],A;
    fptr=fopen("Shuvo.txt","w");
    if(fptr==NULL)
    {
        printf("Error!!..");
        exit(0);
    }
    printf("Enter your name : ");
    gets(ch);
    fprintf(fptr,"%s",ch);
    printf("File write Successfully.\n\n");
    fclose(fptr);
    fptr=fopen("Shuvo.txt","r");
    while( ! feof ( fptr ) )
    {
        A = getc( fptr ) ;
        printf("%c",A );
    }
    fclose(fptr);
    return 0;
}

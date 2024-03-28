#include<stdio.h>
int main()
{
    FILE *file;
    char A[50];
    int n;
    file=fopen("Shuvo.txt","w");
    if(file==NULL)
    {
        printf("File dose not Exit.\n");
        exit(0);
    }
    else
    {
        printf("File is Created Successfully.\n");
        printf("Enter your full name : ");
        gets(A);
        printf("Enter your age : ");
        scanf("%d",&n);
        fprintf(file,"Name : %s  , Age : %d\n",A,n);
        printf("File is written Successfully.\n");
        fclose(file);
    }
}

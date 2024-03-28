#include<stdio.h>
int main()
{
    FILE*file;
    char A[50];
    int age;
    file = fopen("test.txt","a");
    if(file==NULL)
    {
        printf("This file is not open.\n");
    }
    else
    {
        printf("This file is open Successfully.\n");
        printf("Enter your full name :  ");
        gets(A);
        printf("Enter your Age : ");
        scanf("%d",&age);
        fprintf(file,"Name : %s\nAge : %d\n", A,age);
        printf("File is Open Successfully.\n");
        fclose(file);

    }

}

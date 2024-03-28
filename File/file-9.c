#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*file;
    char name[500];
    int age,phone,i,n;
    file=fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File don't exit.\n");
    }
    else
    {
        printf("File is exit.\n");
        printf("Enter Student number :  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("Enter your name : ");
            scanf("%s",&name);

            printf("Enter your age : ");
            scanf("%d",&age);

            printf("Enter your Phone_Number : ");
            scanf("%d",&phone);
            fprintf(file,"\n%s\t\t\t\t\t%d\t\t\t%d\n",name,age,phone);
        }
        fclose(file);
    }
    getch();
}

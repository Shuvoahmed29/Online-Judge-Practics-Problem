#include<stdio.h>
int main()
{
    FILE *file;
    int age,i,phone,n;
    char name[30];
    file=fopen("StudentDetelts.txt","a+");
    if(file==NULL)
    {
        printf("File dose not exit.\n");
    }
    else
    {
        printf("File is open Successfully.\n");
        printf("Enter number of Student : ");
        scanf("%d",&n);
        printf("\nEnter %d Students Detels : ",n);
        for(i=1;i<=n;i++)
        {
            printf("\nEnter Student Name : ");
            scanf("%s",&name);

            printf("Enter Student age : ");
            scanf("%d",&age);

            printf("Enter Student phoneNumber : ");
            scanf("%d",&phone);
            fprintf(file,"%s\t\t\t%d\t\t%d\n",name,age,phone);

        }
    }
    fclose(file);
}

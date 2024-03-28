#include<stdio.h>
int main()
{
    FILE *fptr;
    char A[30];
    int n;
    fptr=fopen("Shuvo.txt","r");
    fscanf(fptr,"%s  %d",&A,&n);
    printf("Name : %s\n",A);
    printf("Roll : %d\n",n);
    fclose(fptr);
}

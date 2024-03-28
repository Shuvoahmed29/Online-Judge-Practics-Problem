#include<stdio.h>
int main()
{
    FILE *fptr;
    long long int n;
    char A[50];
    fptr=fopen("Shuvo.txt","w");

    printf("Enter your full name : ");
    gets(A);
    printf("Enter your roll : ");
    scanf("%lld",&n);

    fprintf(fptr,"%s\n%lld",A,n);
    fclose(fptr);
}

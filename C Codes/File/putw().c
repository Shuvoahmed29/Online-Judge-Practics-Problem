#include<stdio.h>
int main()
{
    FILE *fptr;
    int i,n;
    printf("Enter last number : ");
    scanf("%d",&n);
    fptr=fopen("Shuvo.txt","w");
    for(i=1;i<=n;i++)
    {
        putw(i,fptr);
    }
    fclose(fptr);
    return 0;
}

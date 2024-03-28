#include<stdio.h>
#include<string.h>
int main()
{

    char A[101],B[101];
    int r;
    while(scanf("%s%s",A,B)!=EOF)
    {
        r=strcmp(strlwr(A),strlwr(B));
        printf("%d\n",r);
    }

}

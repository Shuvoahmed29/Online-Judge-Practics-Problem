#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    char A[n];
    scanf("%s",&A);
    for(j=0; j<t; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(A[i]=='B' && A[i+1]=='G')
            {

                A[i]='G';
                A[i+1]='B';
                i++;
            }
        }
    }
    printf("%s\n",A);
}

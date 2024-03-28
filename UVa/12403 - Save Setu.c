#include<stdio.h>
int main()
{
    int t,i,k,p,sum=0;
    scanf("%d",&t);
    char A[20];
    for(i=0; i<t; i++)
    {
        scanf("%s",&A);
        p=strcmp(A,"donate");
          if(p==0)
        {
            scanf("%d",&k);
            sum=sum+k;
        }
        else
            printf("%d\n",sum);
    }
    return 0;
}


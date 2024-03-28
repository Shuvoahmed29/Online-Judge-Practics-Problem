#include<stdio.h>
#include<string.h>
int main()
{
    int n,p=0,k=0,i,len,j;
    char A[20];
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        fgets(A,sizeof(A),stdin);
        len=strlen(A);
        for(j=0;j<len;j++)
        {
            if(A[j]=='F')
                p++;
            else if(A[j]=='M')
                k++;
        }
    }
    printf("%d carrinhos\n",k);
    printf("%d bonecas\n",p);
    return 0;
}

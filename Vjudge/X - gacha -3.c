#include<stdio.h>
int main()
{
    int n,k=0,j,i,p,q,w=0,f=0;
    scanf("%d",&n);
    char A[n][11];
    int len[n];
    for(i=0; i<n; i++)
    {
        scanf("%s",&A[i]);
        k++;
    }
    for(i=0; i<n; i++)
    {
        len[i]=strlen(A[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(len[i]==len[j])
            {
                for(p=0; p<n; p++)
                {
                    for(q=p+1; q<n; q++)
                    {
                        for(w=0; w<=len[i]; w++)
                        {
                            if(A[p][w]==A[q][w])
                            {
                                f++;
                            }
                            if(f==len[i] && f==len[j])
                            {
                                k=k-1;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",k);
    return 0;
}

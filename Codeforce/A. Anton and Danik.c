#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,a=0,d=0;
    scanf("%d",&n);
    char A[100];
    scanf("%s",&A);
    for(i=0; i<n; i++)
    {
        if(A[i]=='A')
        {
            a++;
        }
        else if(A[i]=='D')
        {
            d++;
        }
    }
    if(a==d)
    {
        printf("Friendship\n");
    }
    else if(a>d)
    {
        printf("Anton\n");
    }
    else if(a<d)
    {
        printf("Danik\n");
    }
    return 0;
}

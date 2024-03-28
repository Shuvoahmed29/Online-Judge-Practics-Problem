#include<stdio.h>
int main()
{
    int t,e=0,o=0;;
    scanf("%d",&t);
    int i,n,j;
    for(i=0; i<t; i++)
    {
        e=0;
        o=0;
        scanf("%d",&n);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2==0)
                e=e+a[j];
            else
                o=o+a[j];
        }
        if(n%2!=0)
            printf("Tie\n");
        else if(e>o)
            printf("Alice\n");
        else
            printf("Bob\n");
    }
    return 0;
}

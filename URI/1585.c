#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    int x,y,i;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        p=(x*y)/2;
        printf("%d cm2\n",p);
    }
    return 0;

}

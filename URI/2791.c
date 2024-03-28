#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(i=1; i<=4; i++)
    {
        if(a==1)
        {
            printf("1\n");
            return 0;
        }
        else if(b==1)
        {
            printf("2\n");
            return 0;
        }
        else if(c==1)
        {
            printf("3\n");
            return 0;
        }
        else if(d==1)
        {
            printf("4\n");
            return 0;
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int num[]={10,19,30,50,60,45};
    int pos=-1,n,i;
    printf("Whice value do u want: ");
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        if(n==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Not found");
    }
    else
    {
        printf("Found in %d position",pos);

    }
    return 0;
}

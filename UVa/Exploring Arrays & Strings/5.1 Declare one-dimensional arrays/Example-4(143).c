#include<stdio.h>
int main()
{
    int n;
    printf("How many number do you want?\nAnswer = ");
    scanf("%d",&n);
    int num[n];
    int i,j,p,copy;
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(j=0;j<n-1;j++)
    {
        p=j;
        for(i=j+1;i<n;i++)
        {
            if(num[i]<num[p])
            {
                p=i;
            }
        }
        copy=num[j];
        num[j]=num[p];
        num[p]=copy;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;

}




/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int item[10];
    int a,b,t;
    int count;
    printf("How many numbers? ");
    scanf("%d",&count);
    for(a=0; a<count; a++)
        scanf("%d",&item[a]);
    for(a=1;a<count; ++a)
    {
        for(b=count-1; b>=a; --b)
        {
            if(item[b-1]>item[b])
            {
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
        }
    }
    for(t=0; t<count; t++)
        printf("%d ",item[t]);
    return 0;
}*/

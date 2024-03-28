#include<stdio.h>
int main()
{
    int A[5]={10,20,30,40,50};
    int i,*p;

    for(i=0;i<5;i++)
    {
        p=&A[i];
        printf("%d\n",*p);

    }
}

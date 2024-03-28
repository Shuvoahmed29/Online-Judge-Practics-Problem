#include<stdio.h>
int main    ()
{
	int n, r ;
    printf("Enter a number");
    scanf("%d",&n);
    for(;n!=0;)
    {
    	r = n%10;
    	n =n/10;
    	printf("%d", r);

    }
    return 0;
}


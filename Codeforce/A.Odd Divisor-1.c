#include<stdio.h>

int main()
{
    int i,j;
    long long int n;
    while(1) {
        scanf("%lld",&n);
        for(i=3; i<=n; i=i+2) {
            if(n%i==0) {
                printf("Yes\n");
                goto label;
            }
        }
        printf("No\n");

        label:

        i=3;
    }
    return 0;
}

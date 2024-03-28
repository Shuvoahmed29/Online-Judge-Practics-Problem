#include <stdio.h>
int main()
{
    int N, reversedN = 0, remainder, originalN ;
    scanf("%d", &N);
    originalN = N;
    while (N != 0)
    {
        remainder = N % 10;
        reversedN = reversedN * 10 + remainder;
        N /= 10;
    }
    if (originalN == reversedN)
        printf("Yes");
    else
        printf("No");
    return 0;
}

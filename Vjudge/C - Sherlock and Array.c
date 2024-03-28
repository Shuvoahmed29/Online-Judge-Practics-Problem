#include<stdio.h>
int main()
{
    int t, n, i, *A, L, R;
    scanf("%d\n", &t);
    while(t--)
    {
        scanf("%d\n", &n);
        //A = malloc(n * sizeof(int));
        L = R = 0;
        for (i = 0; i < n; ++i)
        {
            scanf("%d", A + i), R += A[i];
        }
        for (i = 0; i < n; ++i)
        {
            R -= A[i];
            if (L == R)
            {
                printf("YES\n");
                break;
            }
            L += A[i];
            if (L > R)
            {
                printf("NO\n");
                break;
            }
        }
        //free(A);
    }
    return 0;
}

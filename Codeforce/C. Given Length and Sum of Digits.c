#include <stdio.h>
int main()
{
    int m, s, t, i;
    scanf("%d %d",&m,&s);
    string a, b;

    if (s == 0)
    {
        printf("-1 -1\n");
        return 0;
    }
    for (i = 0; i < m; i++)
    {
        t = min(s, 9);
        b += t + '0';
        s -= t;
    }

    if (s > 0)
    {
        printf("-1 -1\n");
        return 0;
    }

    for (i = m - 1; i >= 0; i--)
        a += b[i];

    for (i = 0; a[i] == '0'; i++);

    a[i]--, a[0]++;
    printf("%s %s\n",a,b);
    return 0;
}

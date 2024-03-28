#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    long i, l, le, f, m4, m15, m55, m100, m400,k=0;
    char y[10001];
    while(gets(y))
    {
        le = f = m4 = m15 = m55 = m100 = m400 = 0;
        l = strlen(y);
        for (i = 0; i < l; ++i)
        {
            m4 = ((m4 * 10) + (y[i] - '0')) % 4;
            m15 = ((m15 * 10) + (y[i] - '0')) % 15;
            m55 = ((m55 * 10) + (y[i] - '0')) % 55;
            m100 = ((m100 * 10) + (y[i] - '0')) % 100;
            m400 = ((m400 * 10) + (y[i] - '0')) % 400;
        }
        if((m4 == 0 && m100 != 0) || (m400 == 0))
        {
            printf("This is leap year.\n");
            le = f = 1;
        }
        if(m15 == 0)
        {
            printf("This is huluculu festival year.\n");
            f = 1;
        }
        if(le == 1 && m55 == 0)
            printf("This is bulukulu festival year.\n");
        if(f == 0)
        {
            printf("This is an ordinary year.\n");
            k=1;
        }
        if(k==1)
            return 0;
    }
}

#include <stdio.h>
int main()
{
    int current_time,hour_later,time;
    scanf("%d", &current_time);
    scanf("%d", &hour_later);

    time = current_time+hour_later;

    if(time>24)
        printf("%d\n",time-24);
    else
        printf("%d\n",time);

    return 0;
}

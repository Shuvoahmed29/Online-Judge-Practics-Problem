#include<stdio.h>
int main()
{
    double ft_mark,sec_mark,total_mark,final_mark;
    printf("Enter the three number:      ");
    scanf("%lf%lf%lf",&ft_mark,&sec_mark,&final_mark);
    total_mark=(ft_mark/4)+(sec_mark/4)+(final_mark/2);
    printf("Total mark is %0.2lf",total_mark);
    return 0;
}

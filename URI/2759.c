#include<stdio.h>
int main()
{
    char a,bh,ch;
    scanf("%c%c%c",&a,&bh,&ch);

    printf("A = %c, B = %c, C = %c\n",a,bh,ch);
    printf("A = %c, B = %c, C = %c\n",bh,ch,a);
    printf("A = %c, B = %c, C = %c\n",ch,a,bh);
    return 0;
}

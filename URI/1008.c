#include<stdio.h>
int main()
{
    int A,B,NUMBER;
    float C,SALARY;
    scanf("%d%d%f",&A,&B,&C);
    NUMBER=A;
    SALARY=B*C;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",NUMBER,SALARY);
    return 0;
}

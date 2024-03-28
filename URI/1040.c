#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,A,D,avg,avg1;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    N1=N1*2.0;
    N2=N2*3.0;
    N3=N3*4.0;
    N4=N4*1.0;
    avg=(N1+N2+N3+N4)/10;
    printf("Media: %0.1f\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
   else if(avg<5.0)
   {
       printf("Aluno reprovado.\n");
   }
   else if(avg>=5.0&&avg<=6.9)
   {
       printf("Aluno em exame.\n");
       scanf("%f",&A);
       D=A;
       printf("Nota do exame: %0.1f\n",D);
       avg1=(avg+D)/2;
       printf("Aluno aprovado.\n");
       printf("Media final: %0.1f\n",avg1);
   }
   return 0;
}

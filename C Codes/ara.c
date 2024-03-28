#include<stdio.h>
int main()
{
    int ft_marks[5];
    int st_marks[5];
    int final_marks[5];
    printf("Enter first marks ,second marks,final marks : ");
    scanf("%d%d%d",&ft_marks,&st_marks,&final_marks);

    int i;
    double total_marks[5];
    for(i=0;i<5;i++)
    {
        total_marks[i]=(ft_marks[i]/4.0)+(st_marks[i]/4.0)+(final_marks[i]/2.0);
    }
    for(i=1;i<=5;i++)
   {
       printf("Roll is : %d\n\t Total_marks is : %0.2f\n\t",i,total_marks[i-1]);
   }
   return 0;
}

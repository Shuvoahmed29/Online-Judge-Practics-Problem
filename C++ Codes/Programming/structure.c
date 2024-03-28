/*#include<stdio.h>
struct persion{
    char name[30];
    int age;
    double salary;
};
struct persion persion[2];
int main(){
    for(int i=1;i<=2;i++){
        printf("\nEnter persion %d information : \n",i);
        printf("Persion %d name: ",i);
        fflush(stdin);
        gets(persion[i].name);
        printf("Persion %d age: ",i);
        scanf("%d",&persion[i].age);
        printf("Persion %d salary: ",i);
        scanf("%lf",&persion[i].salary);
    }
    for(int i=1;i<=2;i++){
        printf("\nPersion %d information is : \n",i);
        printf("Name: ");
        printf("%s\n",persion[i].name);
        printf("Age: ");
        printf("%d\n",persion[i].age);
        printf("Salary : ");
        printf("%0.2lf\n",persion[i].salary);
    }
}*/
//Part-B 2019......(7(a))
/*#include<stdio.h>
struct student{
    char name[30];
    int roll;
    double m1,m2,m3;
};
struct student s[3];
int main(){
    double avg[4];
    for(int i=1;i<=3;i++){
        printf("\nInformation for Student-%d : \n",i);
        printf("Enter Student-%d Name :",i);
        fflush(stdin);
        gets(s[i].name);
        printf("Enter Student-%d Roll :",i);
        scanf("%d",&s[i].roll);
        printf("Enter Student-%d  CSE-1101 Marks :",i);
        scanf("%lf",&s[i].m1);
        printf("Enter Student-%d  PHY-1101 Marks :",i);
        scanf("%lf",&s[i].m2);
        printf("Enter Student-%d  HUM-1101 Marks :",i);
        scanf("%lf",&s[i].m3);
        avg[i]=s[i].m1+s[i].m2+s[i].m3;
        avg[i]=avg[i]/3;
    }
    for(int i=1;i<=3;i++){
        printf("\n\nStudent-%d Imformation is : \n",i);
        printf("Student-%d Name :",i);
        printf("%s\n",s[i].name);
        printf("Student-%d Roll :",i);
        printf("%d\n",s[i].roll);
        printf("Student-%d Avarage Marks :",i);
        printf("%0.2lf\n",avg[i]);
    }
}*/

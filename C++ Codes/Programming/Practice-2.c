/*#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr=arr;
    for(int i=0;i<5;i++) printf("%d\t",ptr[i]);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i=1;
    while(i<=5){
        printf("%d\t",i);
        i++;
    }
    do{
        printf("%d\t",i);
        i++;
    }
    while(i<=5);
}*/

/*#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int x=n1,y=n2;
    while(n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("GCD or HCF or GCF = %d\n",n1);
    int lcm=(x*y)/n1;
    printf("LCM = %d\n",lcm);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\t%d\n",a,b);
}*/
/*#include<stdio.h>
int solve(int a){
    if(a!=0) return (a*a*a+solve(a-1));
    else return a;
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    printf("%d\n",solve(n));
    return 0;
}*
//AP Series
/*#include<stdio.h>
int main(){
    int f,l,d,sum=0;
    scanf("%d%d%d",&f,&l,&d);
    int k=f;
    for(int i=1;i<=l;i=i+d){
        sum=sum+k;
        printf("%d + ",k);
        k=k+d;
    }
    printf("...+ n = %d\n",sum);
    return 0;
}*/
//GP Series
/*#include<stdio.h>
int main(){
    int f,l,d,sum=0;
    scanf("%d%d%d",&f,&l,&d);
    int k=f;
    for(int i=f;i<=l;i=i*d){
        sum=sum+k;
        printf("%d + ",k);
        k=k*d;
    }
    printf(" = %d\n",sum);
    return 0;
}*/
//HP Series
/*#include<stdio.h>
int main(){
    double f,n,d;
    scanf("%lf%lf%lf",&f,&n,&d);
    double sum=0,k=(1/f);
    for(int i=0;i<n;i++){
        sum=sum+k;
        printf("1/%0.0lf + ",f);
        f=f+d;
        k=1/f;
    }
    printf(" = %0.2lf\n",sum);
    return 0;
}*/


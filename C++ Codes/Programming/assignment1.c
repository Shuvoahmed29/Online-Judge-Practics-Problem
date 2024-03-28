// 1. Write a c program to reverse any number
/*#include<stdio.h>
int solve(int a){
    static int sum=0;
    if(a==0) return sum;
    sum=sum*10+(a%10);
    solve(a/10);
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
    return 0;
}*/
// 2. Write a c program to find out sum of digit of given number.
/*#include<stdio.h>
int solve(int a){
    static int sum=0;
    while(a!=0){
        int r=a%10;
        sum=sum+r;
        a/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
}*/
//3. Write a c program to find out power of number.
/*#include<stdio.h>
int solve(int a){
    return a*a;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
}*/
//4. Write a c program to c add two number without using additional operator .
/*#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum =a-(-b);
    printf("%d\n",sum);
}*/
// 5. Write a c program to subtract two numbers without using subtraction operator.
/*#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sub=a+(-b);
    printf("%d\n",sub);
}*/
//8. Write a c program to find out generic root of any number.
/*#include<stdio.h>
int main(){
    int n,r,sum=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum+=r;
        n/=10;
        if(n==0){
            if(sum>9){
                n=sum;
                sum=0;
            }
        }
    }
    printf("%d",sum);
}*/
//9. Write a c program to find out prime factor of given number.
/*#include<stdio.h>
int main()
{
    int n,i,j,k,e;
    printf("Enter any integer number :  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            k=0;
        }
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}*/
//9. Write a c program to find out prime factor of given number.
/*#include<stdio.h>
int main(){
    int n,cunt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)cunt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)cunt++;
        }
        if(cunt==2)printf("%d\t",i);
    }
}*/
//10. Write a c program to find out NCR factor of given number.
/*#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int a,b;scanf("%d%d",&a,&b);
    if(a<b)printf("ERROR!!!\n");
    int fact1=fact(a);
    int fact2=fact(b);
    int fact3=fact(a-b);
    int ans=(fact1/(fact2*fact3));
    printf("NCR = %d\n",ans);
    ans=(fact1/fact3);
    printf("NPR = %d\n",ans);
}*/
// 12. Program in c to print 1 to 100 without using loop
/*#include<stdio.h>
void solve(int n){
    if(n<=100){
        printf("%d\n",n);solve(n+1);
    }
}
int main(){
    int n=1;solve(n);return 0;
}*/
// 14. Program to find largest of n numbers in c
/*#include<stdio.h>
int main(){
    int n,l=0;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>l)l=arr[i];
    }
    printf("%d\n",l);
}*/
//1. Write a c program to convert decimal number to binary number.
/*#include <stdio.h>
int main(){
    int n,p=0;
    printf("Decimal Number : ");
    scanf("%d",&n);
    int arr[32];
    while(n!=0){
        int rem=n%2;
        arr[p]=rem;
        p++;
        int ans=n/2;
        n=ans;
    }
    printf("Binary Number: ");
    for(int i=p-1;i>=0;i--)printf("%d",arr[i]);
    printf("\n");
}*/
//2. Write a c program to convert decimal number to octal number.
/*#include <stdio.h>
int main(){
    int n,p=0;
    printf("Decimal Number : ");
    scanf("%d",&n);
    int arr[32];
    while(n!=0){
        int rem=n%8;
        arr[p]=rem;
        p++;
        int ans=n/8;
        n=ans;
    }
    printf("Octal Number: ");
    for(int i=p-1;i>=0;i--)printf("%d",arr[i]);
    printf("\n");
}*/
// 3. Write a c program to convert decimal number to hexadecimal number.
/*#include <stdio.h>
int main(){
    int n,p=0;
    printf("Decimal Number : ");
    scanf("%d",&n);
    char str[32];
    while(n!=0){
        int rem=n%16;
        if(rem<10)str[p]=rem+48;
        else if(rem>10)str[p]=rem+55;
        p++;
        int ans=n/16;
        n=ans;
    }
    printf("Hexa Number: ");
    for(int i=p-1;i>=0;i--)printf("%c",str[i]);
    printf("\n");
}*/
//Part-B 2019.....8(a)
//Call by Value.........
#include <stdio.h>
#include <stdlib.h>
void sum(int arr[], int a)
{
    int ans = 0;
    for (int i = 0; i < a; i++)
    {
        ans += arr[i];
    }
    printf("SUM : %d\n", ans);
}
void multi(int arr[], int a)
{
    int ans = 1;
    for (int i = 0; i < a; i++)
    {
        ans = ans * arr[i];
    }
    printf("Multi : %d\n", ans);
}
void devi()
{
}
int main()
{
    int n;
    scanf("%d", &n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum(arr, n);
    multi(arr, n);
}

/*B.Sc. Engineering Examination 1st Year 1st Semester-2020*/
/*There are multipute  solution to solve each problem*/
//Part-A--------1(c)
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4==0&&n%100!=0)
        printf("Leap Year\n");
    else if(n%4==0&&n%100==0&&n%400==0)
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
    return 0;
}*/
//Part-A--------2(b)
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],p=0;
    for(int i=1;i<=2*n;i++){
        if(i%2!=0){arr[p]=i;p++;}
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("Sum: %d\n",sum);
    printf("Series: ");
    printf("%d",arr[0]);
    for(int i=1;i<n;i++){
        printf("+(");
        for(int j=0;j<=i;j++){
            printf("%d",arr[j]);
            if(j!=i)printf("+");
        }
        printf(")");
    }
    printf("...+n\n");
}*/
//Part-A--------3(c)
/*#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    int len=0;
    while(str[len]!=0)len++;
    for(int i=0;i<len;i++){
        if(65<=str[i]&&str[i]<=90)str[i]=str[i]+32;
        else if(97<=str[i]&&str[i]<=122)str[i]=str[i]-32;
    }
    printf("%s\n",str);
}*/
//Part-A--------4(a)
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Size of Array: ");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        if(ptr[i]>50)ptr[i]=-99;
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
}*/
//Part-A--------4(b(i))
/*Output : 
n = 7 n = 6 n = 5 n = 4 n = 3 n = 2 n 
= 1 The value of m = 7 
*/

//Part-A--------4(b(ii))
/*Output:
Value: 1 2424
Value: 2 2424
Value: 3 2424
Value: 4 2424
Value: 5 2424
*/
//Part-B--------5(a)
/*#include<stdio.h>
int main(){
    int i=0;
    while(i<=10){
        printf("Value is: %d\n",i);
        i++;
    }
}*/
//Part-B--------5(c)
/*#include<stdio.h>
int main(){
    int n;
    printf("Line Number: ");
    scanf("%d",&n);
    for(int r=0;r<=n;r++){
        for(int c=1;c<=n-r;c++)printf(" ");
        for(int c=0;c<2*r-1;c++){
            printf("A");
        }
        printf("\n");
    }
}*/
//Part-B--------6(a)
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    char *s1,*s2;
    s1=(char*)malloc(1000*sizeof(char));
    s2=(char*)malloc(1000*sizeof(char));
    printf("S1: ");
    gets(s1);
    printf("S2: ");
    gets(s2);
    int len1=0,len2=0;
    while(s1[len1]!=0)len1++;
    while(s2[len2]!=0)len2++;
    s1[len1]=' ';
    len1++;
    for(int i=0;i<len2;i++){
        s1[len1]=s2[i];
        len1++;
    }
    s1[len1]='\0';
    printf("S1: %s\n",s1);
}*/
//Part-B--------6(c)
/*#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    printf(", ");
    scanf("%d",&b);
    printf(", ");
    scanf("%d",&c);
    if(a<=b&&b<=c)printf("%d\n",b);
    if(b<=a&&a<=c)printf("%d\n",a);
    if(a<=c&&c<=b)printf("%d\n",c);
}*/
//Part-B--------7(b)
/*#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("intWrite.txt", "w");
    char str[1000];
    gets(str);
    if (file == NULL)
        printf("File isn't Open\n");
    else
    {
        printf("File Open Successfully\n");
       
        fputs(str, file);
    }

    fclose(file);
    return 0;
}*/
//Part-B--------8(a(i))
/*Output: 5 9*/
//Part-B--------8(a(ii))
/*Output:NO*/
//Part-B--------8(c)
/*#include <stdio.h>
int solve(int a)
{
    static int sum = 0;
    if (a == 0)
        return sum;
    sum = 10 * sum + (a % 10);
    solve(a / 10);
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", solve(n));
}*/
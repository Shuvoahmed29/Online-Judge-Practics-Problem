/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1,b=1,sum=a+b,ans=2;
    if(n==1){
        printf("1 + .......+ n = 1");
    }
    else if(n==2){
        printf("1 + 1 +.......+ n = 2");
    }
    else if(n>2){
    printf("%d + %d + ",a,b);
    for(int i=2;i<n;i++){
        printf("%d + ",sum);
        ans=ans+sum;
        a=b;b=sum;sum=a+b;
    }
    printf(".....+ n = %d\n",ans);
    }
    return 0;
}*/
#include<stdio.h>
void swap(int *x,int *y){
     int tem=*x;
     *x=*y;
     *y=tem;
}
int main(){
    int a=10,b=200;
    swap(&a,&b);
    printf("%d\t%d\t",a,b);
}
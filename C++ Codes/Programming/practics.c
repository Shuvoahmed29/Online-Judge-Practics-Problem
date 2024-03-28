/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)scanf("%d",&ptr[i]);
    for(int i=0;i<5;i++){printf("%d\t",ptr[0]);ptr++;}
    free(ptr);
    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(1,4*sizeof(int));
    for(int i=0;i<9;i++)scanf("%d",&ptr[i]);
    for(int i=0;i<9;i++){
        printf("%d\t",ptr[0]);ptr++;
    }
    free(ptr);
    return 0;
}*/
#include<stdio.h>
int main(){
    int arr[5]={1,21,31,41};
    int *ptr=arr;
    //for(int i=0;i<5;i++)printf("%d\t",ptr[i]);
    //*++ptr;
    //printf("*++ptr = %d\t",*ptr);
    //++*ptr;
    //printf("++*ptr = %d\t",*ptr);
    *ptr++;
    printf("*ptr++ = %d\t",*ptr);
}
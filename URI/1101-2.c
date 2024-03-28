#include<stdio.h>
int main(){
    int X, Y;

    while (((scanf("%d", &X)) > 0 )&&(((scanf("%d", &Y)) > 0 ))) {
        int sum = 0;
        if (X > Y) {
            for (Y = Y; Y <= X; Y++) {
                sum+=Y;
                printf("%d ", Y);
            }
            printf("Sum=%d\n", sum);
        }else {
            for (X = X; X <= Y; X++) {
                sum += X;
                printf("%d ", X);
            }
            printf("Sum=%d\n", sum);
        }
    }
}

import java.util.*;
public class Somobahu {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = scanner.nextInt();
        int cunt = 0;
        for(int i=1; i<=n;i++){
            for(int j=1; j<= n-i; j++){
                System.out.print(" ");
            }
            cunt = 0;
            for(int j=1; j<=i; j++){
                if(j==1){
                    System.out.print("*"+" ");
                    cunt++;
                }
                if(j==i && j !=1){
                    System.out.print("*"+" ");
                    cunt++;
                }
                else if(i == n){
                    System.out.print("*"+" ");
                }
                else System.out.print(" ");
            }
            System.out.println();
        }
    }
}

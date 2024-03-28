import java.util.*;
public class Pattern6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = scanner.nextInt();
        int cunt = 1;
        for(int i = 0; i<6; i++){
            for(int j = 0; j<n-i; j++){
                System.out.print(" ");
            }
            for(int j = 0; j<i*2-1; j++){
                System.out.print('*' + " ");
            }
            System.out.println();
        }
    }
}

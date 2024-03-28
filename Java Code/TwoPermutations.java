import java.util.*;
public class TwoPermutations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0){
            int n = scanner.nextInt(), a = scanner.nextInt(), b = scanner.nextInt();
            if(n==a && a==b){
                System.out.println("Yes");
            }
            else if(n-a-b>=2){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }
            t--;
        }
    }
}

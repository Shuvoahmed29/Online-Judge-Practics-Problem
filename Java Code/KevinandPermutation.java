import java.util.*;
public class KevinandPermutation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0){
            int n = scanner.nextInt();
            int p = (n/2)+1;
            for(int i = 1; i <= n/2; i++){
                System.out.print(p+ " " + i + " ");
                p++;
            }
            if(n%2 !=0) System.out.println(n);
            else System.out.println();
            t--;
        }
    }
}

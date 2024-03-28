import java.util.Scanner;
import java.util.Arrays;
public class DoremyPaint {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t>0){
            int n = scanner.nextInt();
            int array[] = new int[n];
            for(int i=0; i<n; i++){
                array[i] = scanner.nextInt();
            }
            System.out.println(1+" "+n);
            t--;
        }
    }
}

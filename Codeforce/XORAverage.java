import java.util.*;
public class XORAverage {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t > 0){
            int n = input.nextInt();
            if(n % 2 == 1){
                for(int i = 0; i <n; i++){
                    System.out.print(1 + " ");
                }
                System.out.print("\n");
            }
            else{
                for(int i = 0; i < n-2; i++){
                    System.out.print(2 + " ");
                }
                System.out.println(3 + " " + 1);
            }
            t--;
        }
    }
}

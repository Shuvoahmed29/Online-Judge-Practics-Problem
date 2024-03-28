import java.util.*;

public class Advantage {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t > 0){
            int n = input.nextInt();
            int arr[] = new int[n];
            for(int i = 0; i < n; i++){
                arr[i] = input.nextInt();
            }
            int copy[] = new int[n];
            copy = arr.clone();
            Arrays.sort(copy);
            for(int i = 0; i < copy.length; i++){
                if(arr[i] != copy[n-1])
                    System.out.print(arr[i] - copy[n-1] + " ");
                else
                System.out.print(arr[i] - copy[n-2] + " ");
            }
            System.out.print("\n");
            t--;
        }
    }
}

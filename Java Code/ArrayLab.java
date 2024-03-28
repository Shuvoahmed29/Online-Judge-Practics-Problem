import java.util.*;
public class ArrayLab {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter array element number: ");
        int n = scanner.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
        }
        System.out.println("\nBefore array operation!!");
        for(int d:arr)  System.out.print(d+" ");
        
        int rev_arr[] = new int[n], sum_arr[] = new int[n];
        int cunt_arr[] = new int[n];

        for(int i = 0; i < n; i++){
            int cunt = 0,rev = 0,sum = 0;
            while(arr[i] != 0){
                int r = arr[i]%10;
                cunt++;
                rev = rev*10 + r;
                sum = sum + r;
                arr[i] = arr[i]/10;
            }
            rev_arr[i] = rev;
            sum_arr[i] = sum;
            cunt_arr[i] = cunt;
        }

        System.out.println("\nAfter reverse array!!");
        for(int d:rev_arr) System.out.print(d+" ");

        System.out.println("\nAfter sum array element!!");
        for(int d:sum_arr) System.out.print(d+" ");

        System.out.println("\nAfter cunt array element!!");
        for(int d:cunt_arr) System.out.print(d+" ");
    }
}

import java.util.*;
public class ArrayElementSum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Array element number: ");
        int n = scanner.nextInt();
        int arr[] = new int[n];
        int arr1[] = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
        }
        System.out.println("Before Operation!!");
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        for(int i = 0; i < n; i++){
            int sum = 0;
            while(arr[i]!=0){
                sum+=arr[i]%10;
                arr[i]= arr[i]/10;
            }
            arr1[i] = sum;
        }


        System.out.println("\nAfter Operation!!");
        for(int i = 0; i < n; i++){
            System.out.print(arr1[i] + " ");
        }
    }
}

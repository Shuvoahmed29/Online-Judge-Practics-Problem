import java.util.*;
public class ReverseArrayDigit {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter number of array elements: ");
        int n = input.nextInt();
        System.out.println("Enter "+n + " elements: ");
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) {
            arr [i] = input.nextInt();
        }
        System.out.println("Before Reverse array digit!");
        for(int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
        System.out.println("After Reverse array digit!");
        for(int i = 0; i < n; i++) {
            int temp = arr[i];
            int reverse = 0;
            while(temp != 0){
                int r = temp%10;
                reverse = reverse*10 + r;
                temp = temp/10;
            }
            System.out.println(reverse);
        }
    }
}

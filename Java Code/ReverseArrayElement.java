import java.util.*;

public class ReverseArrayElement {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter number of array elements: ");
        int n = input.nextInt();
        int array[] = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        System.out.println("Before reverse array element!!");
        for (int d : array) {
            System.out.print(d + " ");
        }
        System.out.println("\nAfter reverse array element!!");
        for (int i = 0; i < n; i++) {
            String str = Integer.toString(array[i]);
            StringBuilder sb = new StringBuilder(str);
            sb.reverse();
            int m = Integer.valueOf(sb);
            System.out.print(m + " ");
        }
    }
}

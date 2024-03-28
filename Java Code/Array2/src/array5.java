import java.util.Scanner;
import java.util.Arrays;

public class array5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter number of array element: ");
        int n = input.nextInt();
        System.out.println("Enter " + n + " array elemet. ");

        int array[] = new int[n];
        for (int i = 0; i < n; i++) {
            int x = input.nextInt();
            array[i] = x;
        }
        Arrays.sort(array);
        System.out.println("Array element are: ");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
    }
}

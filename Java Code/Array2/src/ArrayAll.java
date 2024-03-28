import java.util.*;

public class ArrayAll {
    static int func(int arr[]) {
        // System.out.print("Output array is: ");
        int sum = 0;
        for (int i : arr) {
            sum += i;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter array element number: ");
        int n = input.nextInt();
        System.out.print("Enter " + n + " array element : ");
        int array[] = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        // Arrays.sort(array);
        System.out.println(func(array));
    }
}

import java.util.*;

public class MultidimensionalArray {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter array row number: ");
        int n = input.nextInt();
        System.out.print("Enter array coloum number: ");
        int m = input.nextInt();
        int arr[][] = new int[n][m];

        System.out.println("Enter " + n + "x" + m + "array!!");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                System.out.print("arr["+ i + "][" + j + "] : " );
                arr[i][j] = input.nextInt();
            }
        }

        System.out.println("The Matrix is: ");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.print("\n");
        }
    }
}

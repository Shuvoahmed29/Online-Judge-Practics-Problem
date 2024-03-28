import java.util.*;
public class MatricesAddition {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter row number for matrix A and B : ");
        int rowA = input.nextInt();
        System.out.print("Enter column number for matrix A and B: ");
        int colA = input.nextInt();

        System.out.println("Matrix A element !!");
        int A[][] = new int[rowA][colA];
        for(int i = 0; i < rowA; i++){
            for(int j = 0; j < colA; j++){
                System.out.print("A[" + i + "][" + j + "] : ");
                A[i][j] = input.nextInt();
            }
        }

        System.out.println("\nMatrix A is: ");
        for(int i = 0; i < rowA; i++){
            for(int j = 0; j < colA; j++){
                System.out.print(A[i][j] + " ");
            }
            System.out.print("\n");
        }


        System.out.println("Matrix B element !!");
        int B[][] = new int[rowA][colA];
        for(int i = 0; i < rowA; i++){
            for(int j = 0; j < colA; j++){
                System.out.print("B[" + i + "][" + j + "] : ");
                B[i][j] = input.nextInt();
            }
        }

        System.out.println("\nMatrix B is: ");
        for(int i = 0; i < rowA; i++){
            for(int j = 0; j < colA; j++){
                System.out.print(B[i][j] + " ");
            }
            System.out.print("\n");
        }


        int sum[][] = new int[rowA][colA];
        for(int i = 0; i < rowA; i++){
            for(int j = 0; j < colA; j++){
                sum[i][j] = A[i][j] + B[i][j];
            }
        }

        System.out.println("\nA + B: ");
        for(int i = 0; i < rowA; i++){
            for(int j = 0; j < colA; j++){
                System.out.print(sum[i][j] + " ");
            }
            System.out.print("\n");
        }
    }
}

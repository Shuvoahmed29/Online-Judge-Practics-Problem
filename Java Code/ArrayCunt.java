import java.util.*;
import java.lang.Exception;
public class ArrayCunt {
    public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       System.out.print("Enter number of elements: ");
       int n = scanner.nextInt();
       
       System.out.println("Enter "+n+" array elements!!");
       int arr[] = new int[n];
       for(int i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
       }

       System.out.println("\nBefore Operation!!");
       for(int d:arr) System.out.print(d + " ");

       for(int i = 0; i < n; i++){
            int cunt = 0;
            while(arr[i] != 0){
                int r = arr[i]%10; 
                cunt++;
                arr[i] = arr[i]/10;
            }
            arr[i] = cunt;
       }

       System.out.println("\nAfter Operation!!");
       for(int d:arr) System.out.print(d + " ");
       System.out.println();
    }
}

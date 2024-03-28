import java.util.Scanner;

public class Sum {
    public static int sum(int number){
        int result=0;
        while(number!=0){
            result=result+number%10;
            number=number/10;
        }
        return result;
    }
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];


        for(int i=0 ; i<n ; i++){
            arr1[i] = scanner.nextInt();
        }

        for(int i=0 ; i<n ; i++){
            arr2[i] = sum(arr1[i]);
        }

        for(int i:arr2){
            System.out.print(i+" ");
        }
    }


}

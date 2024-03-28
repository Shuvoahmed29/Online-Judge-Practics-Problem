import java.util.*;

public class Exception {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        try {
            System.out.print("Enter two integer : ");
            int n = input.nextInt(), m = input.nextInt();
            int ans =  n / m;
            System.out.println("Division Result : "+ans);
        } catch (ArithmeticException e) {
            System.out.println("Exception: " + e);
        }
        System.out.println("This last line");

    }
}

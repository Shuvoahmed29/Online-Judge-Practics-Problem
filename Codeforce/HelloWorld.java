import java.util.Scanner;

public class HelloWorld {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in); // System.in is a standard input stream
        Scanner str = new Scanner(System.in);
        System.out.print("Enter first number- ");
        int a = sc.nextInt();
        System.out.print("Enter second number- ");
        int b = sc.nextInt();
        System.out.print("Enter third number- ");
        String c = str.nextLine();
        int d = a + b;
        System.out.println("Total= " + d);
        System.out.println("String is: " + c);
    }

}

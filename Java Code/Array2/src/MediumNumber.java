import java.util.Scanner;

public class MediumNumber {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t > 0) {
            int a = input.nextInt(), b = input.nextInt(), c = input.nextInt();

            if (a != Math.max(a, Math.max(b, c)) && a != Math.min(a, Math.min(b, c))) {
                System.out.println(a);
            }
            if (b != Math.max(a, Math.max(b, c)) && b != Math.min(a, Math.min(b, c))) {
                System.out.println(b);
            }
            if (c != Math.max(a, Math.max(b, c)) && c != Math.min(a, Math.min(b, c))) {
                System.out.println(c);
            }
            t--;

        }
    }
}

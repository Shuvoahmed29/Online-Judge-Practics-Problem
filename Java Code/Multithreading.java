import java.util.*;

public class Multithreading {
    // main method
    public static void main(String args[]) {

        try {
            for (int j = 0; j < 5; j++) {

                // Thread.sleep(1000);

                System.out.println(j);
            }
        } catch (ArithmeticException expn) {
            // catching the exception
            System.out.println(expn);
        }
    }
}
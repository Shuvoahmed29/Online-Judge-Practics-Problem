import java.util.*;
import java.lang.Exception;
public class SumDisionMultiplication {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter two integer: ");
        int a = scanner.nextInt(), b = scanner.nextInt();

        base obj = new sum();
        System.out.println("Sum: " + obj.operation(a,b) );
        try{
            base obj2 = new division();
            System.out.println("Division: " + obj2.operation(a,b));
        }catch(Exception e){
            System.out.println(e);
        }

        base obj1 = new multi();
        System.out.println("Multiplication: " + obj1.operation(a,b));
    }
}
abstract class base{
    abstract int operation(int a, int b);
}
class sum extends base{
    public int operation(int a, int b){
        return a+b;
    }
}
class multi extends sum{
    public int operation(int a, int b){
        return a*b;
    }
}
class division extends base{
    public int operation(int a, int b){
        int p = a/b;
        return p;
    }
}

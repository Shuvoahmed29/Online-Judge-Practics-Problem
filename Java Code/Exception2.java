import java.util.*;
import java.lang.Exception;
public class Exception2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try{
            int a = scanner.nextInt(), b = scanner.nextInt();
            int p = a/b;
            System.out.println(p);
        }catch(Exception e){
            System.out.println(e);
        }
        System.out.println("OKKKKKKK!!!");
    }
}

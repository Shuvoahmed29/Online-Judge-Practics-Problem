import java.util.*;
import java.lang.Exception;
public class Throws {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        try{
        for(int i = 10; i>=0; i--){
            System.out.println(10/i);
            Thread.sleep(100);
            if(i==0)System.out.println("Shuvo");
        }}catch(Exception e){
            System.out.println(e);
        }
    }
}

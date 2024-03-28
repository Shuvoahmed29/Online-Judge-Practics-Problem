import java.util.*;
public class ArrayCopy {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        char ch[] = { 'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
        
        char copy[] = new char[7];
        // System.arraycopy(ch, 2, copy, 0, 5);
        copy = ch.clone();
        for(int i:copy){
            System.out.print((char)i);
        }
        System.out.println("\n"+ (copy==ch));
        System.out.println(ch);

    }
}

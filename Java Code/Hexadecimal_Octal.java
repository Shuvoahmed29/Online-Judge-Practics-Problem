import java.util.*;
import java.lang.Exception;
public class Hexadecimal_Octal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a hexadecimal number: ");
        String hex = scanner.nextLine();
        int idx = 0;
        for(int i = 0; i < hex.length(); i++) {
            if(hex.charAt(i) != '.')idx++;
            if(hex.charAt(i) == '.') break;
        }
        int p = -1;
        double decimal = 0;
        for(int i = idx+1; i < hex.length(); i++) {
            int n;
            if(hex.charAt(i) == 'A') n = 10;
            else if(hex.charAt(i) == 'B') n = 11;
            else if(hex.charAt(i) == 'C') n = 12;
            else if(hex.charAt(i) == 'D') n = 13;
            else if(hex.charAt(i) == 'E') n = 14;
            else if(hex.charAt(i) == 'F') n = 15;
            else n = hex.charAt(i) - '0';
            decimal = decimal + (double)n * Math.pow(16,p);
            p--;
        }
        p = 0;
        for(int i = idx-1; i>=0; i--) {
            int n;
            if(hex.charAt(i) == 'A') n = 10;
            else if(hex.charAt(i) == 'B') n = 11;
            else if(hex.charAt(i) == 'C') n = 12;
            else if(hex.charAt(i) == 'D') n = 13;
            else if(hex.charAt(i) == 'E') n = 14;
            else if(hex.charAt(i) == 'F') n = 15;
            else n = hex.charAt(i) - '0';
            decimal = decimal + (double)n * Math.pow(16,p);
            p++;
        }
        System.out.println("Decimal: "+decimal);
        int num = (int)decimal;
        double num1 = decimal - num;
        String str = "";
        while(num != 0){
            int r = num%8;
            str = str + Integer.toString(r);
            num = num/8;
        }
        while(num1 < 1){
            num1 = num1*8;
        }
        StringBuilder rb = new StringBuilder(str);
        rb.reverse();
        System.out.print("Octal: " + rb + ".");
        num1 = num1*100;
        System.out.println((int)num1);
    }
}
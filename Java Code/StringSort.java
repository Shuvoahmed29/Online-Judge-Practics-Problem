import java.util.Arrays;
public class StringSort {
    public static String sortString(String s) {
        char temp [] = s.toCharArray();
        Arrays.sort(temp);
        return new string(temp);
    }
    public static void main(String[] args) {
        String str = "Cdfab";
        // String str1 = sortString(str);
        System.out.println(str);
    }
}

public class ReverseString {
    public static void main(String[] args) {
        String str = "Shuvo";
        String A ="";
        for(int i = str.length()-1; i >=0 ; i--) {
            A = A + str.charAt(i);
        }
        System.out.println(A);
        String B = "";
        for(int i = 0; i<str.length(); i++) {
            B = str.charAt(i) + B;
        }
        System.out.println(B);
    }
}

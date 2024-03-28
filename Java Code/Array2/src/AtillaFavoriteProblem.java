import java.util.Scanner;

public class AtillaFavoriteProblem {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Scanner sc = new Scanner(System.in);
        int t = input.nextInt();
        while (t > 0) {
            int n = input.nextInt();
            int ans = 0;
            String str = sc.nextLine();
            for (int i = 0; i < n; i++) {
                int p = str.charAt(i) + 1 - 'a';
                ans = Math.max(ans, p);
            }
            System.out.println(ans);
            t--;
        }
    }
}

import java.util.*;
public class MaximumSubstring {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        Scanner Input = new Scanner(System.in);
        int t = input.nextInt();
        for(int p = 0; p<t; p++){
            int n = input.nextInt();
            int one = 0, zero = 0;
            String str = Input.nextLine();
            for(int i = 0; i < n; i++){
                if(str.charAt(i) == '1'){
                    one++;
                }
                else{
                    zero++;
                }
            }
            int cunt1 = 0, cunt0 = 0;
            int ans1 = 1, ans0 = 1;
            for(int i = 0; i < n; i++){
                if(str.charAt(i) == '1'){
                    for(int j = i; j<n; j++){
                        if(str.charAt(j) == '1'){
                            cunt1++;
                        }
                        else{
                            ans1 = Math.max(cunt1,ans1);
                            cunt1 = 0;
                            break;
                        }
                    }
                    ans1 = Math.max(cunt1,ans1);
                }
                else if(str.charAt(i) == '0'){
                    for(int j = i; j<n; j++){
                        if(str.charAt(j) == '0'){
                            cunt0++;
                        }
                        else{
                            ans0 = Math.max(cunt0,ans0);
                            cunt0 = 0;
                            break;
                        }
                    }
                    ans0 = Math.max(cunt0,ans0);
                }
                cunt1 = cunt0 = 0;
            }
            System.out.println(Math.max(one*zero,Math.max(ans1*ans1,ans0*ans0)));
        }
    }
}

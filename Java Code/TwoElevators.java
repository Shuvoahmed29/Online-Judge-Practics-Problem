import java.util.*;
public class TwoElevators {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        while(t > 0){
            int a = input.nextInt(), b = input.nextInt(), c = input.nextInt();
            int time1 = 0, time2 = 0;
            if(a == 1){
                System.out.println(1);
            }
            else{
                time1 = Math.abs(a-1);
                time2 = Math.abs(b-c) + Math.abs(c-1);
                if(time1 == time2){
                    System.out.println(3);
                }
                else{
                    if(time1<time2){
                        System.out.println(1);
                    }
                    else{
                        System.out.println(2);
                    }
                }
            }
            t--;
        }
    }
}

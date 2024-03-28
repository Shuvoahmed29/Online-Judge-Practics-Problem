import java.util.*;
public class YesYes {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        Scanner Input = new Scanner(System.in);
        int t = input.nextInt();
        
        while(t>0){
            String str = Input.nextLine();
            boolean p = false;
            int q = 0;
            if(p == false){
                p = str.contains("Yes");
            }
            if(p == false){
                p = str.contains("esY");
            }
            if(p == false){
                p = str.contains("sYes");
            }
            if(p == false){
                p = str.contains("se");
                if(p == true){
                    q = 1;
                }
            }
            if(p == false && q == 0){
                p = str.contains("e");
            }
            if(p == true && q == 0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }    
            t--;
        }
        
    }
}

import java.util.*;
public class OddPositionCharacter {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter String : ");
        String str = input.nextLine();
        str = str.concat(" is Shuvo");
        System.out.println(str.contains("Name is"));
    }
}

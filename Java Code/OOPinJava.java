import java.util.*;
public class OOPinJava {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        person obj = new person();

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        obj.set_name(name);

        System.out.print("Enter your address: ");
        String address = scanner.nextLine();
        obj.set_address(address);

        System.out.print("Enter your age: ");
        int Age = scanner.nextInt();
        obj.set_age(Age);

        obj.display();
        System.out.println("Age: " + obj.get_age());
    }
}
abstract class human{
    protected String name,address;
    abstract void display();
}
class person extends human{
    private int age;
    void set_name(String name){
        this.name = name;
    }
    void set_address(String address){
        this.address = address;
    }
    void set_age(int age){
        this.age = age;
    }
    int get_age(){
        return age;
    }
    void display(){
        System.out.println("\nName: "+name);
        System.out.println("Address: "+address);
    }
    void display(int age){
        System.out.println("Age: "+ age);
    }
}

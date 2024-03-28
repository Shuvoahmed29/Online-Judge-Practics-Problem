import java.util.*;
public class OOPLab {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        human obj = new human();

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        obj.set_name(name);

        System.out.print("Enter your address: ");
        String address = scanner.nextLine();
        obj.set_address(address);

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();
        obj.set_age(age);

        System.out.println("\nName: " + obj.get_name());
        obj.show();
        obj.show(obj.get_age());
    }
}
abstract class base{
    abstract void show();
}
class human extends base{
    protected String name,address;
    protected int age;

    void set_name(String name) {
        this.name = name;
    }
    String get_name() {
        return name;
    }
    
    void set_address(String address) {
        this.address = address;
    }
    String get_address() {
        return address;
    }

    void set_age(int age) {
        this.age = age;
    }

    int get_age(){
        return age;
    }

    void show(){
        System.out.println("Address: "+address);
    }
    void show(int n) {
        System.out.println("Age: " + n);
    }
}

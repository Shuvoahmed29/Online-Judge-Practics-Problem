import java.util.*;
import java.lang.Exception;
public class OOPforLab {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        drive obj = new drive();

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        obj.set_name(name);

        System.out.print("Enter your Location: ");
        String location = scanner.nextLine();
        obj.set_address(location);

        System.out.print("Enter number of employees: ");
        int n = scanner.nextInt();
        obj.set_emp(n);
        
        System.out.println("\nName: "+obj.get_name());
        System.out.println("Address: "+obj.get_address());
        System.out.println("Number of employees: "+obj.get_emp());
        
    }
}
class Bank{
    protected String Name, Address; 
}
class drive extends Bank{
    private int NumberOfEmp;

    void set_emp(int NumberOfEmp){
        this.NumberOfEmp = NumberOfEmp;
    }
    void set_name(String Name){
        this.Name = Name;
    }
    void set_address(String Address){
        this.Address = Address;
    }

    String get_name(){
        return Name;
    }

    String get_address(){
        return Address;
    }

    int get_emp(){
        return NumberOfEmp;
    }
}

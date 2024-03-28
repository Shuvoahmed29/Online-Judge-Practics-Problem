public class SuperKeyword {
    public static void main(String[] args) {
        drive obj = new drive();
        obj.display();
    }
}
class base{
    void display(){
        System.out.println("Base class calling....");
    }
}
class drive extends base{
    void display(){
        System.out.println("Drive class calling....");
        super.display();
    }
}
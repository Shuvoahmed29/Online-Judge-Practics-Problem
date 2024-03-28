import java.util.*;
public class AccessModifire {
    public static void main(String[] args) {
        drive obj = new drive();
        // obj.show();
        obj.display();
    }
}
class base{
    private void run(){
        System.out.println("This is base private class!!");
    }
    protected void display(){
        System.out.println("This is base class!!");
        run();
    }
}
class drive extends base{
    protected void show(){
        System.out.println("This is drive class!!");
    }
}


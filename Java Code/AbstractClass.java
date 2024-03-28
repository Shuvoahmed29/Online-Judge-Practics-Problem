public class AbstractClass {
    public static void main(String[] args){
        base obj = new drive();
        obj.display();
        base obj2 = new drive2();
        obj2.display();
    }
}

abstract class base{
    abstract void display();
}
class drive extends base{
    void display(){
        System.out.println("This  is Drive class");
    }
}

class drive2 extends base{
    void display(){
        System.out.println("This is Drive-2 class");
    }
}

public class FinalKeyword {
    public static void main(String[] args){
        drive obj = new drive();
        obj.func();
    }
}

class base{
    final void fun(){
        System.out.println("Base class!!");
    }
}
class drive extends base{
    final void func(){
        super.fun();
        System.out.println("Drive class!!");
    }
}

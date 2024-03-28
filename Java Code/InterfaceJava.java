public class InterfaceJava {
    public static void main(String args[]){
        base obj = new base();
        obj.print();
        obj.run();
        obj.test();
    }
}

interface display{
    void print();
    default void run(){
        System.out.println("This is default Run file!!");
    }
}
interface show{
    void test();
}
class base implements display,show{
    public void print(){
        System.out.println("This is Interface Class!!");
    }
    public void test(){
        System.out.println("This is test file!!");
    } 
}

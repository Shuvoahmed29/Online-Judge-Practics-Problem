public class ThreadGetSetName {
    public static void main(String[] args) {
        th obj = new th();
        th1 obj1 = new th1();
        System.out.println("Th1: "+obj.getName());
        System.out.println("Th2: "+obj.getName());
        obj.start();
        obj1.start();
        obj.setName("Shuvo");
        System.out.println("Th1: "+obj.getName());
    }
}
class th extends Thread{
    public void run() {
        System.out.println("Thead-0 Running");
    }
}
class th1 extends Thread{
    public void run() {
        System.out.println("Thead-1 Running");
    }
}

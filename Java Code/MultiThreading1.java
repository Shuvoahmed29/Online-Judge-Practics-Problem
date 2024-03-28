import java.util.*;
public class MultiThreading1 {
    public static void main(String[] args) {
        test obj = new test();
        Thread thread = new Thread(obj);
        // test1 obj1 = new test1();
        // Thread thread1 = new Thread(obj1);
        // obj.setPriority(1); 
        thread.start();
        // thread1.start();
        for(int i = 0; i <5;i++){
            System.out.println("First: " + i);
        }
        
        // System.out.println(obj.getName()+" priority : "+ obj.getPriority());
        // System.out.println(obj1.getName()+" priority : "+ obj1.getPriority());
    }
}
// class test extends Thread{
//     public void run(){
//         for(int i = 0; i <5;i++){
//             System.out.println("Second: " + i);
//         }
//     }
// }
class test1 extends Thread{
    public void run(){
        for(int i = 0; i <5;i++){
            System.out.println("Third: " + i);
        }
    }
}
class test implements Runnable{
    public void run(){
        for(int i = 0; i <5;i++){
            System.out.println("Second: " + i);
        }
    }
}

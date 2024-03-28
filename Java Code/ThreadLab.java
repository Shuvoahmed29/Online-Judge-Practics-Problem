import java.util.*;
import java.lang.Exception;
public class ThreadLab {
    public static void main(String[] args) {
        Example obj = new Example();
        Thread th1 = new Thread(obj);
        Thread th2 = new Thread(obj);
        th1.start();
        th2.start();
    }
}
class Example extends Thread{
    public void run(){
        for(int i=1; i<=5;i++){
            System.out.println(Thread.currentThread().getName() + ": " +i);
            try {
               sleep(1); 
            } catch (Exception e) {
                
            }
        }
    }
}

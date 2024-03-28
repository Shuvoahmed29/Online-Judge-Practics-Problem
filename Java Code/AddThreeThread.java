import java.util.*;
import java.lang.Exception;
public class AddThreeThread {
    public static void main(String[] args) {
        example even_obj = new example(1);
        example odd_obj = new example(2);
        example obj3 = new example(0);
        Thread even = new Thread(even_obj,"Thread-1");
        Thread odd = new Thread(odd_obj,"Thread-2");
        Thread other = new Thread(obj3,"Thread-3");
        even.start();
        odd.start();
        other.start();
    }
}
class example extends Thread{
    int rem;
    static int cunt = 1;
    static Object lock = new Object();
    example(int n){
        rem = n;
    }
    public void display(){
        System.out.println(Thread.currentThread().getName()+ ": " + cunt++);
    }
    
    public void run(){
        for(int i = 1; i <=10; i++){
            synchronized(lock){
                while(cunt%3 != rem)
                try{
                    lock.wait();
                }catch(Exception e){
                    // e.printStackTrace();
                    System.out.println(e);
                }  
                display();
                lock.notifyAll(); 
            } 
        }          
    }
}

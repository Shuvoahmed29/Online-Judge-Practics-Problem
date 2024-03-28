import java.util.*;
import java.lang.Exception;
public class OddEven {
    public static void main(String[] args) {
        Example even_obj = new Example(0);
        Example odd_obj = new Example(1);
        Thread Even = new Thread(even_obj,"Even Thread");
        Thread Odd = new Thread(odd_obj,"Odd Thread");
        Even.start();
        Odd.start();
    }
}
class Example extends Thread{
    int rem;
    static int cunt = 1;
    static Object lock = new Object();
    Example(int rem){
        this.rem = rem;
    }
    public void display(){
        System.out.println(Thread.currentThread().getName()+" "+cunt++);
    }
    public void run(){
        for(int i=1; i<=10; i++){
            synchronized(lock){
                while(cunt%2 != rem)try{
                    lock.wait();
                }catch(Exception e){
                    System.out.println(e);
                }
                display();
                lock.notify();
            }
        }
    }
}

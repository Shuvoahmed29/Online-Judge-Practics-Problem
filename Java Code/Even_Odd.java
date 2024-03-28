import java.util.*;
import java.lang.Exception;
public class Even_Odd {
    public static void main(String[] args) {
        example even_obj = new example(0);
        example odd_obj = new example(1);
        Thread even = new Thread(even_obj,"Even Thread");
        Thread odd = new Thread(odd_obj,"Odd Thread");
        even.start();
        odd.start();
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
        System.out.println(Thread.currentThread().getName()+ " " + cunt++);
    }
    
    public void run(){
        for(int i = 1; i <=5; i++){
            synchronized(lock){
                while(cunt%2 != rem)
                try{
                    lock.wait();
                }catch(Exception e){
                    // e.printStackTrace();
                    System.out.println(e);
                }  
                display();
                lock.notify(); 
            } 
        }          
    }
}

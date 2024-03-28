import java.util.*;
public class EvenandOdd {
    public static void main(String[] args) {
        Example even_obj = new Example(0);
        Example odd_obj = new Example(1);

        Thread even = new Thread(even_obj,"Even Thread");
        Thread odd = new Thread(odd_obj,"Odd -Thread");

        even.start();
        odd.start();
    }
}
class Example extends Thread{
    int remainder;
    static int cunt = 1;
    static Object lock = new Object();
    Example(int n){
        remainder = n;
    }

    public void display(){
        System.out.println(Thread.currentThread().getName() + ": " + cunt++);
    }
    public void run(){
        for(int i = 0; i < 5; i++){
            synchronized(lock){
                while(cunt%2 != remainder)
                try{
                    lock.wait();
                }catch(InterruptedException e){
                    e.printStackTrace();
                }
                display();
                lock.notify();
            }
        }
    }
}

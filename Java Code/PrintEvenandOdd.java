import java.util.*;
public class PrintEvenandOdd {
    public static void main(String[] args) {
        example obj_even = new example(0);
        example obj_odd = new example(1);

        Thread even = new Thread(obj_even,"Even-Thread");
        Thread odd = new Thread(obj_odd,"Odd -Thread");
        even.start();
        odd.start();
    }
}
class example implements Runnable {
    static int cunt = 1;
    int remainder;
    static Object lock = new Object();

    example(int remainder){
        this.remainder = remainder;
    }
    public void print(){
        System.out.println(Thread.currentThread().getName()+" " +  (cunt++) );
    }
    public void run(){
        for(int i=1; i<=10; i++) {
            synchronized(lock){
                while(cunt%2 != remainder)
                    try{
                        lock.wait();
                    }catch(Exception e){
                        e.printStackTrace();
                    }
                    print();
                    lock.notify();   
            }
        }
    }
}

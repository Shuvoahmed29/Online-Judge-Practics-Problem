import java.util.*;
import java.lang.Exception;
public class Threading {
    public static void main(String[] args) {
        test1 obj = new test1();
        test2 obj1 = new test2();
        test3 obj2 = new test3();
        obj.start();
        try {
            obj1.sleep(1);
            obj2.sleep(1);
        }
        catch (java.lang.Exception err) {
        }
        obj1.start();
        try {
            obj.sleep(1);
            obj2.sleep(1);
        }
        catch (java.lang.Exception err) {
        }
        obj2.start();
        try {
            obj.sleep(1);
            obj1.sleep(1);
        }
        catch (java.lang.Exception err) {
        }
    }
}
class test1 extends Thread {
    public void run() {
        for(int i = 1; i <=5; i++){
            if(i/0==1) 
            {
                try {
                    //throw ArithmeticException;
                }
                catch (java.lang.Exception err) {
                }
            }
            System.out.println(Thread.currentThread().getName()+":"+i);
            
        }
    }
}
class test2 extends Thread {
    public void run() {
        for(int i = 1; i <=5; i++){
            System.out.println(Thread.currentThread().getName()+":"+i);
            try {
                sleep(10);
            }
            catch (java.lang.Exception err) {
            }
        }
    }
}
class test3 extends Thread {
    public void run() {
        for(int i = 1; i <=5; i++){
            System.out.println(Thread.currentThread().getName()+":"+i);
            try {
                sleep(10);
            }
            catch (java.lang.Exception err) {
            }
        }
    }
}

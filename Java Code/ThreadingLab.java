import java.util.*;
import java.lang.Exception;
public class ThreadingLab {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter two integer for subtract: ");
        int a = scanner.nextInt(), b = scanner.nextInt();

        Example obj1 = new Example(a);
        Example obj2 = new Example(b,1);
        Example obj3 = new Example();

        Thread th1 = new Thread(obj1);
        Thread th2 = new Thread(obj2);
        Thread th3 = new Thread(obj3);
        th1.start();
        th2.start();
        th3.start();
    }
}
class Example extends Thread{
    static int n = 0,m = 0,p = 0;
    static int cunt = 0;
    static Object lock = new Object();
    Example(){

    }
    Example(int n){
        this.n = n;
    }
    Example(int m, int p){
        this.m = m;
        this.p = p;
    }
    void display(){
        System.out.println("Subtraction: " +(n-m));
        cunt++;
    }
    public void run() {   
        display();
    }
}
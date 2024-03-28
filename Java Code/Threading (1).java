import java.lang.*;
import java.util.Scanner;

class T1 extends Thread{
    int[] arr = new int[5];
    int thread_number;
    T1(int thread_number){
        this.thread_number=thread_number;
    }

    public void get_arr(int i){
        for(int j=0 ; j<5 ;j++){
            arr[j]=i;
        }
    }
    public void run() {
        int result=0;
        for(int j=0 ; j<5 ; j++) {
            result=result+arr[j]+j;
        }
        System.out.println("Running thread "+thread_number+"  sum="+result);
    }
}
public class Threading{
    public static void main(String[] args) {

        int[] arr = new int[5];
        Scanner scanner=new Scanner(System.in);

        for(int i=0 ; i<5 ;i++){
            System.out.print("Enter one number for thread "+(i+1)+":");
            arr[i]=scanner.nextInt();
        }

        T1 t1 = new T1(1);
        T1 t2 = new T1(2);
        T1 t3 = new T1(3);
        T1 t4 = new T1(4);
        T1 t5 = new T1(5);

        t1.get_arr(arr[0]);
        t2.get_arr(arr[1]);
        t3.get_arr(arr[2]);
        t4.get_arr(arr[3]);
        t5.get_arr(arr[4]);

        t1.start();
        t2.start();
        t3.start();
        t5.start();
        t4.start();
    }
}

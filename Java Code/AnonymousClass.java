public class AnonymousClass {
    public static void main(String[] args) {
        Thread thread = new Thread(){
            public void run() {
                for(int i =1;i<5;i++){
                    if(i%2!=0)  System.out.print(i + " ");
                }
            }
        };
        thread.start();
        Thread thread1 = new Thread(){
            public void run() {
                for(int i =1;i<5;i++){
                    if(i%2==0)  System.out.print(i + " ");
                }
            }
        };
        thread1.start();
    }
}

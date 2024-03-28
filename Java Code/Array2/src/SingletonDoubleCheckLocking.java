public class SingletonDoubleCheckLocking {
    public static void main(String args[]){
        Thread t1 = new Thread(new Runnable() {
            public void run() {
                doubleCheck obj = doubleCheck.getInstance();
            }
        });

        Thread t2 = new Thread(new Runnable() {
            public void run() {
                doubleCheck obj2 = doubleCheck.getInstance();
            }
        });
        t1.start();
        t2.start();  
    }
}

class doubleCheck{
    private static doubleCheck instance = null;
    private doubleCheck(){
        System.out.println("Instance is Created !!");
    }
    public static doubleCheck getInstance(){
        if(instance == null){
            synchronized(doubleCheck.class){
                if(instance == null){
                    instance = new doubleCheck();
                }
            }
        }
        return instance;
    }
    public void getMessage(){
        System.out.println("Double Singleton Check Locking!");
    }
}

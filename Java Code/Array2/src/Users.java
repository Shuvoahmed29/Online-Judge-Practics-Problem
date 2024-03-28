public class Users {
    public static void main(String args[]){
        Singleton obj = Singleton.getInstance();
        obj.messege();
        obj.messege2();
    }
}

class Singleton {
    private static Singleton instance = new Singleton();
    private Singleton() {}
    public static Singleton getInstance() {
        return instance;
    }
    public void messege(){
        System.out.println("Singleto Messege is Called!!");
    }

    public void messege2(){
        System.out.println("Hello Java for Singleton");
    }
}

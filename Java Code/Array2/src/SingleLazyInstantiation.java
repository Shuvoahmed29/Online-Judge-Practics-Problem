public class SingleLazyInstantiation {
    public static void main(String agrs[]){
        Lazy obj = Lazy.getInstance();
        obj.getMessage();
    }
}

class Lazy{
    private static Lazy instance = null;
    private Lazy(){

    }
    public static Lazy getInstance(){
        if(instance == null){
            instance = new Lazy();
        }
        return instance;
    }
    public void getMessage(){
        System.out.println("Singleton Lazy instanceiation !!");
    }

}

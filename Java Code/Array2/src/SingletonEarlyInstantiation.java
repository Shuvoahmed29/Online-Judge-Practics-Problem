public class SingletonEarlyInstantiation {
    public static void main(String args[]){
        Early obj = Early.getInstance();
        obj.getMessage();
    }
}

class Early{
    private static Early instance = new Early();
    private Early(){

    }
    public static Early getInstance(){
        return instance;
    }
    public void getMessage(){
        System.out.println("Singleton Early Instantiation !!");
    }
}

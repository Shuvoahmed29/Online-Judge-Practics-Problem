public class Singleton2 {
    public static void main(String[] args){
        Late obj = Late.get_instance();
        obj.display();
    }
}
class Late{
    private static Late instance = null;
    private Late(){

    }
    public static Late get_instance(){
        if(instance == null){
            instance = new Late();
        }
        return instance;
    }
    public void display(){
        System.out.println("This is Laty instance!!");
    }
}

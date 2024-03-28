public class Encapsulation {
    public static void main(String[] args) {
        man obj = new man();
        obj.setName("Shuvo Ahmed");
        System.out.println("Name: " + obj.getName());
    }
}
class man{
    private String name;
    void setName(String name){
        this.name = name;
    }
    String getName(){
        return name;
    }
}

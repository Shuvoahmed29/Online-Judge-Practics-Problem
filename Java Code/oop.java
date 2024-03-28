class Human{
    //using access specifier and encapsulation
    private String name,address;
    private int age;

    public void setter(String name,int age,String address){
        this.age=age;
        this.name=name;
        this.address=address;
    }
    public void show(){
        System.out.println("Showing from human class\n"+"age:"+age+"\nname:"+name+"\naddress:"+address);
    }
    //overloading polymorphism
    public void show(int i){

        System.out.println("Showing for parameterised show\n"+"age:"+age);
    }
}


public class oop {
    public static void main(String[] args) {
        Human obj = new Human();
        obj.setter("Sakib",20,"pabna");
        obj.show();
        obj.show(1);
    }
}

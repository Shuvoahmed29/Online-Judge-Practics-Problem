public class ThisKeyword {
    public static void main(String[] args){
        test obj = new test();
        obj.display();
    }
}

class test{
    void hello(){
        System.out.println("Hello Java !!");
    }

    void display(){
        System.out.println("Hello World !!");
        this.hello();
    }
}

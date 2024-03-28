public class Inheritance {
    public static void main(String[] args){
        driveClass2 obj = new driveClass2();
        obj.baseFunction();
        obj.display();

        driveClass obj1 = new driveClass();
        obj1.baseFunction();
        obj1.display();
    }
}

class baseClass{
    void baseFunction(){
        System.out.println("This is Base Class !!");
    }
}
class driveClass extends baseClass{
    void display(){
        System.out.println("This is Drive class !!");
    }
}
class driveClass2 extends baseClass{
    void display(){
        System.out.println("This is Second drive class!!");
    }
}

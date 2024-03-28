public class Constructor {
    public static void main(String[] args){
        Student obj = new Student(29,"Shuvo");
        obj.display();
        Student obj2 = new Student();
        obj2 = obj;
        obj2.display();
    }
}

class Student{
    int id;
    String name;
    Student(){

    }
    Student(int id, String name){
        this.id = id;
        this.name = name;
    }
    Student(Student s){
        id = s.id;
        name = s.name;
    }
    void display(){
        System.out.println(id + " " + name);
    }
}

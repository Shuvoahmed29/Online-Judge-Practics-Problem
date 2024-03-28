public class OnokGulaObject {
    public static void main(String[] args) {
        example obj = new example();
        example obj1 = new example();
        example obj2 = new example();
        obj.set_data(10);
        obj1.set_data(5);
        obj2.set_data(10);
        System.out.println(obj.get_data() + obj1.get_data() + obj2.get_data());
    }
}
class example{
    int a;
    void set_data(int a){
        this.a = a;
    }
    int get_data(){
        return a;
    }
}
class example1{
    int b;
    void set_data(int b){
        this.b = b;
    }
    int get_data(){
        return b;
    }
}
class example2{
    int c;
    void set_data(int c){
        this.c = c;
    }
    int get_data(){
        return c;
    }
}

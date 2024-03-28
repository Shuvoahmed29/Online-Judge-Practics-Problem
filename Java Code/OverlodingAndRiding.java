public class OverlodingAndRiding {
    public static void main(String[] args){
        overLoading obj = new overLoading();
        obj.get_data(10);
        obj.get_data(10,2);

        drive obj2 = new drive();
        obj2.display();
        
    }
}
class overLoading{
    void get_data(int a){
        System.out.println("Value is "+a);
    }
    void get_data(int a, int b){
        System.out.println("Sum Value is "+(a+b));
    }
}
class overRiding{
    void display(){
        System.out.println("This is Over riding base class!!");
    }
}
class drive extends overRiding{
    void display(){
        System.out.println("This is Over riding drive class!!");
    }
}
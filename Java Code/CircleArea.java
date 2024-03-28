public class CircleArea {
    public static void main(String[] args){
        Circle obj = new Circle();
        double a = obj.get_data(5);
        System.out.println(String.format("%.2f", a));
    }
}

class Area{
    int area(int n){
        return n*n;
    }
}
class Circle{
    double get_data(int n){
        Area obj = new Area();
        int result = obj.area(n);
        double ans = 3.1416 *result;
        return ans;
    }
}

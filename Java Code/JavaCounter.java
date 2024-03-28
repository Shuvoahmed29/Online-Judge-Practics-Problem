public class JavaCounter {
    public static void main(String[] args) {
        countObject obj1 = new countObject();
        countObject obj2 = new countObject();
    }
}

class countObject {
    static int cunt = 0;

    countObject() {
        cunt++;
        System.out.println("Number of object : " + cunt);
    }
}
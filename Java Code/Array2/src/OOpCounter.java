public class OOpCounter {
    public static void main(String[] args) {
        countObject obj1 = new countObject();
    }
}

class countObject {
    int cunt = 0;

    countObject() {
        cunt++;
        System.out.println("Number of object : " + cunt);
    }
}

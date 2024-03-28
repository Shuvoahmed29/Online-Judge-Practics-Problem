public class CatDog {
    public static void main(String[] args) {
        dog obj = new dog();
        obj.voiceCat();
        cat obj2 = new cat();
        obj2.voiceDog();
    }
}
interface class ca{
    void voiceCat(){
        System.out.println("mu mu mu.....");
    }
}
class dog extends cat{
    void voiceDog(){
        System.out.println("bark bark bark....");
    }
}

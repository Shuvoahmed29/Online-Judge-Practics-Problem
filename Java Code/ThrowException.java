public class ThrowException {
    public static void main(String[] args) throws ArithmeticException{
        example obj = new example();
        try{
            obj.check(16);
        }
        catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }
    }
}
class example{
    public void check(int age){
        if(age < 18){
            throw new ArithmeticException("Under age!");
        }
        else{
            System.out.println("Welcome Voter!!");
        }
    }
}

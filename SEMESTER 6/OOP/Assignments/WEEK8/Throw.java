public class Throw {
    public static void main(String[] args) {
        try {
            throw new Exception("I'm an exception and I occur without any reason😈");
        } catch (Exception error) {
            System.out.println("WwHat dId I do?🤷‍♂️");
            System.out.println(error.getMessage());
        }
    }
}

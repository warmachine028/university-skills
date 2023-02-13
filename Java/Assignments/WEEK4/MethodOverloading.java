class Class{
    static int method(int variable){
        return variable;
    }
    static int method(int variable, float variable2){
        return variable;
    }
    static int method(long variable, int variable2){
        return variable2;
    }
}

public class MethodOverloading {
    public static void main(String[] args) {
        System.out.println(Class.method(10));
        System.out.println(Class.method(10, 20f));
        System.out.println(Class.method(10l, 20));
    }
}
// CODE 1: Java Program to implement static keyword

class University {
    String name, id;
    static String universityName = "UEM";

    University(String name, String id) {
        this.name = name;
        this.id = id;
    }
}

public class StaticKeyword {
    public static void main(String[] args) {
        University student = new University("PRITAM KUNDU", "12020009001101");
        System.out.printf("%s\n%s\n%s", University.universityName, student.name, student.id);
    }
}
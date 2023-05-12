// CODE 2: Java Program to implement static Method

public class StaticMethod {
    public static void main(String[] args) {
        System.out.println(University.universityName);
        University.universityName = "University of Engineering and Management";
        System.out.println(University.universityName);
    }
}

public class Student extends Person{
    String studentId;

    Student(String name, String doB, String studentId) {
        super(name, doB);
        this.studentId = studentId;
    }
}

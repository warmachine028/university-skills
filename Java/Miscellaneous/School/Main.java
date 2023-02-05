public class Main {
    public static void main(String[] args) {
        Person person = new Person("John Doe", "15-03-2002");
        Teacher teacher = new Teacher("Jane Doe", "13-02-1985",
                39000, Subject.COA);
        Student student = new Student("Javed Akhtar", "19-09-1998",
                "12020010101");

        CollegeStudent c_student = new CollegeStudent("Pritam Kundu", "15-03-2002",
                "12020009001101", "UEMK", YearOfStudying.THIRD);

        System.out.printf(
                "Person: %s\nTeacher: %s\nStudent: %s\nCollege Student: %s",
                person.name, teacher.name, student.name, c_student.name);

    }
}

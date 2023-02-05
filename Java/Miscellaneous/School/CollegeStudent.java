enum YearOfStudying {
    FIRST,
    SECOND,
    THIRD,
    FOURTH
}

public class CollegeStudent extends Student {
    String collegeName;
    YearOfStudying year;

    CollegeStudent(String name, String doB, String studentId, 
            String collegeName, YearOfStudying year) {
        super(name, doB, studentId);
        this.collegeName = collegeName;
        this.year = year;
    }
}

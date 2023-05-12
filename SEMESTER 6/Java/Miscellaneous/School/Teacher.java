package School;

enum Subject {
    COA,
    DBMS,
    CN,
    JAVA,
    PYTHON,
    FLAT,
    DSA,
    DAA,
    AIML,
    BLOCK_CHAIN
}

public class Teacher extends Person {
    int salary;
    Subject subject;

    Teacher(String name, String dob, int salary, Subject subject) {
        super(name, dob);
        this.salary = salary;
        this.subject = subject;
    }
}

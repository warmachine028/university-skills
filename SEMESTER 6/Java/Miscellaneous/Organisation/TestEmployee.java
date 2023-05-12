package Organisation;

public class TestEmployee {
    public static void main(String[] args) {
        Person p = new Person("Pritam Kundu");
        Employee emp = new Employee(p.name, 2012, "120201021");
        System.out.println(p.name.equals(emp.name));
    }
}
// javac -d . *.java && java Organisation.TestEmployee
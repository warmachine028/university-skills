package Organisation;

public class Employee extends Person {
    private double annual_salary;
    private int year_of_joining;
    private String nationalIN;

    Employee(String name, double ansal, String ni_number) {
        super(name);
        setAnnualSalary(ansal);
        nationalIN = ni_number;
    }

    void setAnnualSalary(double ansal) {
        annual_salary = ansal;
    }

    double getAnnualSalary() {
        return annual_salary;
    }

    int getYearOfJoining() {
        return year_of_joining;
    }

    String getNationalIN() {
        return nationalIN;
    }
}

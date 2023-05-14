import java.util.Scanner;

public class Employee {
    String empId, empName;
    double basicSalary;
    double DA = 1200;

    Employee(String empId, String empName, double basicSalary) {
        this.empId = empId;
        this.empName = empName;
        this.basicSalary = basicSalary;
    }

    double grossSalary() {
        return basicSalary + DA;
    }
}

class Main {
    public static void main(String[] args) {
        String empId, empName;
        double basicSalary;
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter employee Id: ");
        empId = sc.nextLine();
        System.out.printf("Enter employee Name: ");
        empName = sc.nextLine();
        System.out.printf("Enter employee Basic Salary: ");
        basicSalary = sc.nextDouble();
        Employee emp = new Employee(empId, empName, basicSalary);
        System.out.println(emp.grossSalary());
        sc.close();
    }
}
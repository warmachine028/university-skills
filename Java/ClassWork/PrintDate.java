// CODE 1: Illustrating usage of BuiltIn Packages

import java.util.Date;
import java.text.SimpleDateFormat;
import java.text.*;

public class PrintDate {
    public static void main(String[] args) {
        Date date = new Date();
        SimpleDateFormat dd = new SimpleDateFormat("dd/MM/yyyy");
        java.text.SimpleDateFormat dd2 = new java.text.SimpleDateFormat("dd/MM/yy");
        System.out.println(date);
        System.out.println(dd.format(date));
        System.out.println(dd2.format(date));
    }
}

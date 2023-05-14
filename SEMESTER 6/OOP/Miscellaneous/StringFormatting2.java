import java.text.NumberFormat;
import java.util.*;

class StringFormatting2 {

    static String formatter(Locale locale, double currency) {
        NumberFormat n = NumberFormat.getCurrencyInstance(locale);
        return n.format(currency);  
    }

    public static void main(String[] args) {
        
        Locale India = new Locale("en", "IN");
        
        System.out.println("United States: " + formatter(Locale.US, 12345.678));
        System.out.println("France: " + formatter(Locale.FRANCE, 12345.678));
        System.out.println("China: " + formatter(Locale.FRANCE, 12345.678));
        System.out.println("India: " + formatter(India, 12345.678));
    }    
}

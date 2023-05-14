public class WhichDay {
    static String findDay(int day, int month, int year) {
        String weekday;
        weekday = java.time.LocalDate.of(year, month, day).getDayOfWeek().toString();
        return weekday;
    }
}

class Main {
    public static void main(String[] args) {
        System.out.println(WhichDay.findDay(15, 03, 2002));
    }
}
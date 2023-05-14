class Keyword {
    int value = 10;
}

public class SuperKeyword extends Keyword {
    int superValue;

    SuperKeyword() {
        superValue = super.value * 10;
    }

    public static void main(String[] args) {
        Keyword basicKeyword = new Keyword();
        SuperKeyword superKeyword = new SuperKeyword();

        System.out.println(basicKeyword.value + " " + superKeyword.superValue);
    }
}

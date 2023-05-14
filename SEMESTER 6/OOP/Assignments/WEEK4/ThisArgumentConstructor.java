
class Self {
    int variable2;

    Self(Other other) {
        this.variable2 = other.variable;
    }

}

class Other {
    int variable = 100;

    Other() {
        new Self(this);
    }
}

public class ThisArgumentConstructor {
    public static void main(String[] args) {
        Other object = new Other();
        Self object2 = new Self(object);
        System.out.println(object.variable + " " + object2.variable2);
    }
}

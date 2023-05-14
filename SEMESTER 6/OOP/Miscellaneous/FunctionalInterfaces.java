
@FunctionalInterface
public interface FunctionalInterfaces {
    void abstractMethod();

    // All of these methods are concrete yet they do not violate the properties of abstraction
    default void defaultMehod() {
        System.out.println("Method is not implemented yet, this is a default implementation");
    }

    private void privateMethod() {
        System.out.println("Can't access/Override a private Method");
    }

    static void staticMethod() {
        System.out.println("New java allows Interfaces to support concrete static Methods");
    }
}

class Main {
    public static void main(String[] args) {
        FunctionalInterfaces x = new FunctionalInterfaces() {
            @OverrideMethods
            public void abstractMethod() {
                System.out.println("This is an example of annonymous class using interface abstraction");
            }

            // @Override
            private void privateMethod() {
                System.out.println("Could'nt access the private method of interface to override");
            }
        };
        var y = new FunctionalInterfaces() {
            @OverrideMethods
            public void abstractMethod() {
            }

            @OverrideMethods
            public void defaultMehod() {
                System.out.println("This annonymous class has the default Method implemented");
            }
        };
        FunctionalInterfaces z = () -> System.out.println("This is a annonymous function inside an annonymous class");
        x.abstractMethod();
        x.defaultMehod();
        z.abstractMethod();
        z.defaultMehod();
        y.defaultMehod();
        FunctionalInterfaces.staticMethod();
        // x.staticMethod();

    }
}
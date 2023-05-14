interface Interface0 {
}

interface MyInterface1 extends Interface0 {
}

interface MyInterface2 {
}

abstract class MySuperClass {
}

class MyClass extends MySuperClass implements MyInterface1, MyInterface2 {
    // class definition
}

public class MRO extends MyClass {
    static void getSuperClasses(Class<?> object) {
        Class<?> superClass = object.getSuperclass();
        if (superClass == null)
            return;
        getSuperClasses(superClass);
        getInterfaces(object);
        System.out.println(superClass.getName());
    }

    static void getInterfaces(Class<?> object) {
        Class<?> interfaces[] = object.getInterfaces();
        if (interfaces.length == 0)
            return;
        for (Class<?> _interface : interfaces) {
            getInterfaces(_interface);
            System.out.println(_interface.getName());
        }
    }

    public static void main1(String[] args) {
        // in another class
        Class<?> c = MyClass.class;

        // get the interfaces implemented by MyClass
        Class<?>[] interfaces = c.getInterfaces();
        for (Class<?> iface : interfaces) {
            System.out.println(iface.getName());
        }

        // get the superclass of MyClass
        Class<?> superClass = c.getSuperclass();
        if (superClass != null) {
            System.out.println(superClass.getName());
        }
    }

    public static void main(String[] args) {
        getSuperClasses(MyClass.class);
        System.out.println();
        getSuperClasses(MRO.class);
    }
}
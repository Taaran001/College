package prog9.mypack;

public class MainApp {
    public static void main(String[] args) {

        // Method Overriding
        Base obj = new Derived();
        obj.show();

        // Exception Handling
        Derived d = new Derived();
        d.divide(10, 2);
        d.divide(10, 0);
    }
}

package prog9.mypack;

public class Derived extends Base {

    @Override
    public void show() {
        System.out.println("This is Derived class method (Overridden)");
    }

    public void divide(int a, int b) {
        try {
            int result = a / b;
            System.out.println("Result: " + result);
        }
        catch (ArithmeticException e) {
            System.out.println("Exception caught: cannot divide by zero");
        }
        finally {
            System.out.println("Execution completed");
        }
    }
}

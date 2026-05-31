package prog6;

class WrapperDemo {

    int num1, num2, sum, product;

    // Constructor
    WrapperDemo(String str1, String str2) {

        // Converting String values into integers
        num1 = Integer.parseInt(str1);
        num2 = Integer.parseInt(str2);

        // Performing operations
        sum = num1 + num2;
        product = num1 * num2;

        System.out.println("First Number: " + num1);
        System.out.println("Second Number: " + num2);
    }

    void display() {
        System.out.println("Sum: " + sum);
        System.out.println("Product: " + product);
    }

    public static void main(String[] args) {

        // Passing String values
        WrapperDemo obj = new WrapperDemo("15", "10");

        obj.display();
    }
}

package prog8;

class Person {
    String name;

    // Constructor
    Person(String name) {
        this.name = name;
    }
}

class Student extends Person {
    static int collegeCode;
    int rollNo, clas;
    long phone;

    // Static Block
    static {
        collegeCode = 100;
    }

    // Constructor 1
    Student(int rollNo, String name) {
        super(name); // constructor chaining (super)
        this.rollNo = rollNo;
        System.out.println("2-arg constructor called");
    }

    // Constructor 2
    Student(int rollNo, String name, int clas, long phone) {
        this(rollNo, name); // constructor chaining (this)
        this.clas = clas;
        this.phone = phone;
    }

    // Default Constructor
    Student() {
        this(101, "ABC", 12, 9999999999L);
        System.out.println("Default constructor called");
    }

    // Static Method
    static void display() {
        System.out.println("Static method is called");
        System.out.println("College Code: " + collegeCode);
    }

    // Method Overloading
    void show() {
        System.out.println("Roll No: " + rollNo);
        System.out.println("Name: " + name);
        System.out.println("Class: " + clas);
        System.out.println("Phone: " + phone);
    }

    void show(String msg) {
        System.out.println(msg);
        show();
    }
}

public class Test {
    public static void main(String[] args) {

        // Static method call
        Student.display();

        // Default constructor
        Student s1 = new Student();
        s1.show();

        // Parameterized constructor
        Student s2 = new Student(27481, "Taaran", 12, 9956543210L);
        s2.show("Student Details:");
    }
}

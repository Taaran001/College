package prog7;

class Student {

    String name;
    int rollNo;

    // Parameterized constructor
    Student(String n, int r) {
        name = n;
        rollNo = r;
        System.out.println("Superclass Constructor Called");
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
    }
}

// Subclass
class Result extends Student {

    int marks;

    // Subclass constructor
    Result(String n, int r, int m) {
        super(n, r);   // Calling superclass parameterized constructor
        marks = m;
        System.out.println("Subclass Constructor Called");
    }

    void showResult() {
        display();
        System.out.println("Marks: " + marks);
    }

    public static void main(String[] args) {

        Result obj = new Result("ABC", 101, 85);
        obj.showResult();
    }
}

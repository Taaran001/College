package prog5;

// Base class

class Person {
    String name;

    void getName(String n) {
        name = n;
    }
}

// Derived class
class Student extends Person {
    int roll;

    void getRoll(int r) {
        roll = r;
    }
}

// Interface 1
interface Sports {
    int sportsMarks = 25;
}

// Interface 2
interface Academics {
    int academicMarks = 75;
}

// Hybrid inheritance class
class Result extends Student implements Sports, Academics {

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + roll);
        System.out.println("Sports Marks: " + sportsMarks);
        System.out.println("Academic Marks: " + academicMarks);
        System.out.println("Total Marks: " + (sportsMarks + academicMarks));
    }
}

// Main class
public class HybridInheritanceDemo {
    public static void main(String[] args) {

        Result r = new Result();
        r.getName("Neha");
        r.getRoll(101);
        r.display();
    }
}

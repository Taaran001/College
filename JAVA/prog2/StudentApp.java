public class StudentApp {

    // 🔹 static data member
    static String collegeName = "Dronacharya";

    // 🔹 instance data members
    int rollNo;
    Integer marks;   // Wrapper class

    // 🔹 static member function
    static void showCollege() {
        System.out.println("College: " + collegeName);
    }

    // 🔹 instance member function
    void showStudent() {
        System.out.println("Roll No: " + rollNo);
        System.out.println("Marks: " + marks);
    }

    // 🔹 static member class (nested class)
    static class Grade {
        static void calculateGrade(Integer marks) {
            if (marks >= 75)
                System.out.println("Grade: A");
            else if (marks >= 60)
                System.out.println("Grade: B");
            else
                System.out.println("Grade: C");
        }
    }

    // 🔹 main method
    public static void main(String[] args) {

        // Wrapper class object
        Integer marks = Integer.valueOf(82);

        // object creation (default constructor is used)
        StudentApp s1 = new StudentApp();

        // assigning values manually
        s1.rollNo = 101;
        s1.marks = marks;

        // calling static method
        StudentApp.showCollege();

        // calling instance method
        s1.showStudent();

        // calling static nested class method
        StudentApp.Grade.calculateGrade(marks);
    }
}

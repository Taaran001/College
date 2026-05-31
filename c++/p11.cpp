#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();  // Add this to clear the newline buffer
    }
    void displayPersonDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class StudentInfo {
protected:
    int rollNo;
    string course;
public:
    void setStudentInfo() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore();  // Clear the newline after rollNo input
        cout << "Enter course name: ";
        getline(cin, course);
    }
    void displayStudentInfo() const {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

class Student : public Person, public StudentInfo {
private:
    float marks[3];
public:
    void setMarks() {
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }
    void displayMarks() const {
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        float total = marks[0] + marks[1] + marks[2];
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << total / 3 << endl;
    }
};

int main() {
    Student s;
    cout << "--- Enter Student Details ---" << endl;
    s.setPersonDetails();
    s.setStudentInfo();
    s.setMarks();
    cout << "\n--- Display Student Details ---" << endl;
    s.displayPersonDetails();
    s.displayStudentInfo();
    s.displayMarks();
    return 0;
}

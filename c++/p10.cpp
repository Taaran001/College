#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    const int rollNo;
    string name;
    int marks[3];

public:
    Student(int r, string n, int m1, int m2, int m3) : rollNo(r) {
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void display() const {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
    }
};

int main() {
    Student s1(101, "Taaran", 85, 90, 78);
    Student s2(102, "Aaryan", 92, 88, 81);

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}

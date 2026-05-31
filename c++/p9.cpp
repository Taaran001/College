#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        } else if (inches < 0) {
            feet -= (abs(inches) / 12 + 1);
            inches = 12 - (abs(inches) % 12);
        }
    }
public:
    Distance() {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i) {
        feet = f;
        inches = i;
        normalize();
    }
    void change(int f, int i) {
        feet = f;
        inches = i;
        normalize();
    }
    Distance add(const Distance& d) const {
        Distance temp(feet + d.feet, inches + d.inches);
        temp.normalize();
        return temp;
    }
    void display() const {
        cout << feet << "'" << inches << "''" << endl;
    }
};

int main() {
    Distance d1(5, 9), d2(3, 11);
    Distance d3;
    d3 = d1.add(d2);
    cout << "First distance: ";
    d1.display();
    cout << "Second distance: ";
    d2.display();
    cout << "Sum of distances: ";
    d3.display();
    d3.change(7, 8);
    cout << "After change: ";
    d3.display();
    return 0;
}

#include <iostream>
using namespace std;
class complex_number {
private:
    float real, imaginary;
public:
    complex_number() {
        real = 0;
        imaginary = 0;
    }
complex_number(float r, float i) {
        real = r;
        imaginary = i;
    }
inline void getdata() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }
    inline void showdata() const {
        cout << real << "+" << imaginary << "i" << endl;
    }
    void add(const complex_number &c) {
        real += c.real;
        imaginary += c.imaginary;
    }
    void mul(const complex_number &c) {
        float r = (real * c.real) - (imaginary * c.imaginary);
        float i = (real * c.imaginary) + (imaginary * c.real);
        real = r;
        imaginary = i;
    }
};
int main() {
    complex_number C1, C2(5.4, 7.8), C3(6.3, 7);
    C1.getdata();
    C1.add(C2);
    C3.mul(C2);
    C1.showdata();
    C2.showdata();
    C3.showdata();
    return 0;
}

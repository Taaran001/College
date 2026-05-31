#include <iostream>
using namespace std;
class NumberPattern {
private:
    int rows;
public:
    NumberPattern(int r) {
        rows = r;}
void ascendingPattern() {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
void descendingPattern() {
        for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << j;}
            cout << endl;}}};
int main() {
    cout << "Pattern 1:\n";
    NumberPattern p1(5);
    p1.ascendingPattern();
cout << "\nPattern 2:\n";
    NumberPattern p2(5);
    p2.descendingPattern();
return 0;
}

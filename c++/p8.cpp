#include <iostream>
using namespace std;
class Cake {
private:
    static int prepared;
    static int sold;
    static int stock;
public:
    static void prepare(int n) {
        prepared += n;
        stock += n;
    }
    static void sell(int n) {
        if (n <= stock) {
            sold += n;
            stock -= n;
        } else {
            cout << "Not enough stock to sell " << n << " cakes." << endl;
        }
    }
    static void display() {
        cout << "Total cakes prepared: " << prepared << endl;
        cout << "Total cakes sold: " << sold << endl;
        cout << "Current stock: " << stock << endl;
    }
};
int Cake::prepared = 0;
int Cake::sold = 0;
int Cake::stock = 0;
int main() {
    Cake::prepare(50);
    Cake::sell(20);
    Cake::prepare(30);
    Cake::sell(40);
    Cake::display();
    return 0;
}

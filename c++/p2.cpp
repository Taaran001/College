#include <iostream>
using namespace std;
class Window {
    int rows, cols;
    char borderChar;
    char insideChar;
public:
    Window(int r, int c, char bc, char ic)
      : rows(r), cols(c), borderChar(bc), insideChar(ic) {}
void draw() const {
        int midRow = rows / 2;
        int midCol = cols / 2;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == 0 || i == rows - 1)               
                    cout << borderChar;
                else if (j == 0 || j == cols - 1)         
                    cout << borderChar;
                else if (i == midRow)                     
                    cout << insideChar;
                else if (j == midCol)                     
                    cout << insideChar;
                else
                    cout << ' ';
            }
            cout << '\n';
        }
    }
};

int main() {
    Window w1(11, 13, '#', '8');   // rows=11, cols=13 (you can change sizes)
    cout << "Window 1:\n";
    w1.draw();
    cout << '\n';

    Window w2(13, 15, '*', '*');   // different dimensions
    cout << "Window 2:\n";
    w2.draw();

    return 0;
}

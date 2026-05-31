#include <iostream>
#include <ctime>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void displayAge() {
        time_t t = time(0);
        tm* now = localtime(&t);
        int currentDay = now->tm_mday;
        int currentMonth = now->tm_mon + 1;
        int currentYear = now->tm_year + 1900;

        int age = currentYear - year;
        if (currentMonth < month || (currentMonth == month && currentDay < day))
            age--;
        cout << "Age: " << age << " years" << endl;
    }
};
int main() {
    int d, m, y;
    cout << "Enter your Date of Birth (DD MM YYYY): ";
    cin >> d >> m >> y;
    Date dob(d, m, y);
    dob.displayAge();
    return 0;
}

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
    friend long int daysdifference(Date D1, Date D2);
};
long int daysdifference(Date D1, Date D2) {
    tm t1 = {};
    t1.tm_mday = D1.day;
    t1.tm_mon = D1.month - 1;
    t1.tm_year = D1.year - 1900;

    tm t2 = {};
    t2.tm_mday = D2.day;
    t2.tm_mon = D2.month - 1;
    t2.tm_year = D2.year - 1900;
    time_t time1 = mktime(&t1);
    time_t time2 = mktime(&t2);
    double diff = difftime(time2, time1);
    return static_cast<long int>(diff / (60 * 60 * 24));
}
int main() {
    Date D1(23, 7, 2003), D2(7, 3, 2010);
    long int days = daysdifference(D1, D2);
    cout << "Difference in days: " << days << endl;
    return 0;
}

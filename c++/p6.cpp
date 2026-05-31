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
    long int daysdifference(const Date& other);
};
long int Date::daysdifference(const Date& other) {
    tm t1 = {};
    t1.tm_mday = day;
    t1.tm_mon = month - 1;
    t1.tm_year = year - 1900;
    tm t2 = {};
    t2.tm_mday = other.day;
    t2.tm_mon = other.month - 1;
    t2.tm_year = other.year - 1900;
    time_t time1 = mktime(&t1);
    time_t time2 = mktime(&t2);
    double diff = difftime(time2, time1);
    return static_cast<long int>(diff / (60 * 60 * 24));
}
int main() {
    Date D1(23, 7, 2003), D2(7, 3, 2010);
    long int days = D1.daysdifference(D2);
    cout << "Difference in days: " << days << endl;
    return 0;
}

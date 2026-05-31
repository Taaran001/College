#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Statistics {
private:
    vector<int> arr;
public:
    Statistics(int n) {
        arr.resize(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) cin >> arr[i];
    }
    double mean() {
        double sum = 0;
        for (int x : arr) sum += x;
        return sum / arr.size();
    }

    double median() {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        if (n % 2 == 0)
            return (arr[n/2 - 1] + arr[n/2]) / 2.0;
        else
            return arr[n/2];
    }
    int mode() {
        sort(arr.begin(), arr.end());
        int maxCount = 1, count = 1, modeVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i-1]) {
                count++;
                if (count > maxCount) {
                    maxCount = count;
                    modeVal = arr[i];
                }
            } else {
                count = 1;
            }
        }
        return modeVal;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    Statistics s(n);
    cout << "Mean = " << s.mean() << endl;
    cout << "Median = " << s.median() << endl;
    cout << "Mode = " << s.mode() << endl;
    return 0;
}

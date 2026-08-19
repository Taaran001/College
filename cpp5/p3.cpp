#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int profit;
    int weight;
    double ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {
    int n, capacity;

    cout << "Enter number of items: ";
    cin >> n;

    Item item[n];

    cout << "Enter profit and weight of each item:\n";

    for (int i = 0; i < n; i++) {
        cin >> item[i].profit >> item[i].weight;
        item[i].ratio = (double)item[i].profit / item[i].weight;
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    sort(item, item + n, compare);

    double maxProfit = 0;

    for (int i = 0; i < n; i++) {

        if (capacity >= item[i].weight) {
            capacity = capacity - item[i].weight;
            maxProfit = maxProfit + item[i].profit;
        }
        else {
            maxProfit = maxProfit +
                        item[i].ratio * capacity;
            capacity = 0;
            break;
        }
    }

    cout << "Maximum Profit = " << maxProfit;

    return 0;
}

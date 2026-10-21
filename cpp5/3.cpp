// Program 3: To implement the Fractional Knapsack Problem using the Greedy Algorithm in C++ to maximize the total profit by selecting items based on their profit-to-weight ratio.

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

    cout << "Name - Tanisha\n";
    cout << "Roll No. - 27482\n";

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

    // Sort according to profit/weight ratio
    sort(item, item + n, compare);

    double maxProfit = 0;

    for (int i = 0; i < n; i++) {

        if (capacity >= item[i].weight) {
            // Take complete item
            capacity = capacity - item[i].weight;
            maxProfit = maxProfit + item[i].profit;
        }
        else {
            // Take fraction of item
            maxProfit = maxProfit +
                        item[i].ratio * capacity;
            capacity = 0;
            break;
        }
    }

    cout << "Maximum Profit = " << maxProfit;

    return 0;
}

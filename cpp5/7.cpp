// program  7 : To solve the 0/1 Knapsack problem using Dynamic Programming and find the maximum profit.

#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
    int weight;
    int profit;
};

// Comparison function for sorting
bool compare(Item a, Item b)
{
    return a.weight < b.weight;
}

int main()
{
    cout << "Name - Taaran\n";
    cout << "Roll No. - 27481\n";

    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    Item item[100];

    cout << "Enter weight and corresponding profit:\n";

    for (int i = 0; i < n; i++)
        cin >> item[i].weight >> item[i].profit;

    cout << "Enter capacity of knapsack: ";
    cin >> W;

    // Sort items according to increasing weight
    sort(item, item + n, compare);

    cout << "\nSorted Items:\n";
    cout << "Weight\tProfit\n";

    for (int i = 0; i < n; i++)
        cout << item[i].weight << "\t"
             << item[i].profit << endl;

    int dp[101][101];

    // Fill DP table
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if (item[i - 1].weight <= w)
            {
                int include = item[i - 1].profit
                            + dp[i - 1][w - item[i - 1].weight];

                int exclude = dp[i - 1][w];

                if (include > exclude)
                    dp[i][w] = include;
                else
                    dp[i][w] = exclude;
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Display DP table
    cout << "\nDP Table:\n";

    cout << "Items\\Capacity\t";

    for (int w = 0; w <= W; w++)
        cout << w << "\t";

    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << i << "\t\t";

        for (int w = 0; w <= W; w++)
            cout << dp[i][w] << "\t";

        cout << endl;
    }

    cout << "\nMaximum Profit = " << dp[n][W];

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(int index, int sum, vector<int> &set, int target)
{
    if (sum == target)
        return true;

    if (index == set.size() || sum > target)
        return false;

    // Include current element
    if (subsetSum(index + 1, sum + set[index], set, target))
        return true;

    // Exclude current element
    if (subsetSum(index + 1, sum, set, target))
        return true;

    return false;
}

int main()
{
    cout << "Name: Tanisha\n";
    cout << "Roll No: 27482\n";

    vector<int> set = {2, 3, 5, 7};
    int target = 10;

    if (subsetSum(0, 0, set, target))
        cout << "Subset exists";
    else
        cout << "Subset does not exist";

    return 0;
}

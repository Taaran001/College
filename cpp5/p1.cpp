#include <iostream>
using namespace std;

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (start <= ub && a[start] <= pivot)
            start++;

        while (a[end] > pivot)
            end--;

        if (start < end)
            swap(a[start], a[end]);
    }

    swap(a[lb], a[end]);
    return end;
}

void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1, ub);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

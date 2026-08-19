#include <iostream>
using namespace std;

void merge(int a[], int lb, int mid, int ub)
{
    int b[100];
    int i = lb;
    int j = mid + 1;
    int k = lb;

    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while (i <= mid)
        b[k++] = a[i++];

    while (j <= ub)
        b[k++] = a[j++];

    for (int i = lb; i <= ub; i++)
        a[i] = b[i];
}

void mergeSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

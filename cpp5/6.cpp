#include <iostream>
using namespace std;

int main() {
    cout << "Name - Taaran\n";
    cout << "Roll No. - 27481\n";

    int n = 5;

    int cost[5][5] = {
        {0, 2, 6, 6, 0},
        {2, 0, 3, 8, 5},
        {6, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    int visited[5] = {0};

    int edges = 0;
    int total = 0;

    visited[0] = 1;

    while (edges < n - 1) {

        int min = 999;
        int x = 0, y = 0;

        for (int i = 0; i < n; i++) {

            if (visited[i]) {

                for (int j = 0; j < n; j++) {

                    if (!visited[j] &&
                        cost[i][j] != 0 &&
                        cost[i][j] < min) {

                        min = cost[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }

        cout << x << " - " << y << " = " << min << endl;

        total = total + min;

        visited[y] = 1;

        edges++;
    }

    cout << "Total Cost = " << total;

    return 0;
}

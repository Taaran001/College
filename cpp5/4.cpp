// Program 4: To implement the Job Sequencing with Deadline problem using a Greedy Algorithm to maximize the total profit by scheduling jobs within their respective deadlines.



#include <iostream>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    cout << "Name - Tanisha\n";
    cout << "Roll No. - 27482\n";

    Job jobs[] = {
        {'A', 2, 100},
        {'B', 1, 19},
        {'C', 2, 27},
        {'D', 1, 25},
        {'E', 3, 15}
    };

    int n = 5;

    // Sort jobs according to profit in decreasing order
    sort(jobs, jobs + n, compare);

    // Find maximum deadline
    int maxDeadline = 0;

    for (int i = 0; i < n; i++) {
        maxDeadline = max(maxDeadline, jobs[i].deadline);
    }

    // Array to store scheduled jobs
    char result[maxDeadline + 1];

    // Initially all slots are empty
    for (int i = 0; i <= maxDeadline; i++) {
        result[i] = '-';
    }

    // Schedule jobs
    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline; j > 0; j--) {
            if (result[j] == '-') {
                result[j] = jobs[i].id;
                break;
            }
        }
    }

    cout << "Scheduled Jobs: ";

    for (int i = 1; i <= maxDeadline; i++) {
        if (result[i] != '-') {
            cout << result[i] << " ";
        }
    }

    return 0;
}

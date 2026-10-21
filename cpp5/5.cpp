// program 5: To find the shortest path from a single source vertex to all other vertices in a weighted graph with non-negative edge weights using Dijkstra's Algorithm



#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "Name - Tanisha\n";
    cout << "Roll No. - 27482\n";

    int n = 5;

    int graph[5][5] = {
        {0, 2, 4, 0, 0},
        {2, 0, 1, 7, 0},
        {4, 1, 0, 3, 5},
        {0, 7, 3, 0, 1},
        {0, 0, 5, 1, 0}
    };

    int dist[5] = {0, INT_MAX, INT_MAX, INT_MAX, INT_MAX};
    int visited[5] = {0};

    for(int i = 0; i < n; i++)
    {
        int u = -1;

        for(int j = 0; j < n; j++)
        {
            if(!visited[j] && (u == -1 || dist[j] < dist[u]))
            {
                u = j;
            }
        }

        visited[u] = 1;

        for(int j = 0; j < n; j++)
        {
            if(graph[u][j] != 0 && dist[u] != INT_MAX && dist[u] + graph[u][j] < dist[j])
            {
                dist[j] = dist[u] + graph[u][j];
            }
        }
    }

    cout << "Shortest distances from vertex 0:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "0 -> " << i << " = " << dist[i] << endl;
    }

    return 0;
}

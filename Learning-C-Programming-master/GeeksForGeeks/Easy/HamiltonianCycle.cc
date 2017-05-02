#include <iostream>

#define V 4
using namespace std;

bool isSafe(int v, bool graph[V][V], int path[], int pos)
{
    if (graph[path[pos - 1]][v] == 0)
        return false;
    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;
    return true;
}
bool hamCycleUtil(bool graph[V][V], int path[], int pos)
{
    if (pos == V)
    {
        return true;
    }
    for (int v = 1; v < V; v++)
    {
        if (isSafe(v, graph, path, pos))
        {
            path[pos] = v;
            if (hamCycleUtil(graph, path, pos + 1) == true)
                return true;
            path[pos] = -1;
        }
    }
    return false;
}
bool hamCycle(bool graph[V][V])
{

    int path[V];
    for (int i = 0; i < V; i++)
        path[i] = -1;
    path[0] = 0;
    if (hamCycleUtil(graph, path, 1) == false)
    {
        return false;
    }
    return true;
}
int main()
{
    bool graph[V][V] = {0};
    int m, n;
    //  int arr[V][2] = {{1, 2}, {2, 3}, {3, 4}, {2, 4}};
    int arr[V][2] = {{1, 2}, {2, 3}, {2, 4}};
    for (int i = 0; i < V; i++)
    {
        m = arr[i][0];
        n = arr[i][1];
        graph[m - 1][n - 1] = 1;
    }

    if (hamCycle(graph))
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return -1;
}